@class HMFMessageDispatcher, NSMapTable, HMDUserMessagePolicy, NSString, NSObject;
@protocol OS_dispatch_queue, HMDAccessorySettingsMessageController;

@interface HMDAccessorySettingsMessageHandler : HMFObject <HMFLogging>

@property (readonly, weak) id<HMDAccessorySettingsMessageController> messageController;
@property (readonly) NSMapTable *settingMessageMap;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMDUserMessagePolicy *onlyOwnerAllowedUserPolicy;
@property (retain) HMDUserMessagePolicy *sharedAdminAllowedUserPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)registerForMessages;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (id)messageMapperForSetting:(id)a0;
- (void)registerForSettingMessages:(id)a0;
- (void)unconfigureFromSetting:(id)a0;
- (void)configureWithMessageDispatcher:(id)a0 home:(id)a1;
- (void)configureForSetting:(id)a0 allowSharedAdminEditConstraints:(BOOL)a1;
- (void)relayUpdateValue:(id)a0 destination:(id)a1 completion:(id /* block */)a2;
- (void)relayReplaceConstraints:(id)a0 constraintIdsToRemove:(id)a1 destination:(id)a2 completion:(id /* block */)a3;
- (void)notifyOfUpdatedValue:(id)a0 setting:(id)a1;
- (void)_handleSettingUpdateValue:(id)a0;
- (void)_handleAddConstraint:(id)a0;
- (void)_handleRemoveConstraint:(id)a0;
- (void)_handleUpdatedConstraints:(id)a0;
- (void)_handleReplaceConstraints:(id)a0;
- (BOOL)_decodeUpdateValueMessagePayload:(id)a0 outValue:(id *)a1;

@end
