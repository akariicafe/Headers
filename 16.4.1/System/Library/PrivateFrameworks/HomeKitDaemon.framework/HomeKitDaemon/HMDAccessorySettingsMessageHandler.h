@class NSMapTable, HMDUserMessagePolicy, HMFMessageDispatcher, NSUUID, NSObject, NSString;
@protocol OS_dispatch_queue, HMDAccessorySettingsMessageController;

@interface HMDAccessorySettingsMessageHandler : HMFObject <HMFLogging, HMFMessageReceiver, HMDAccessorySettingsMessageHandler>

@property (readonly, weak) id<HMDAccessorySettingsMessageController> messageController;
@property (readonly) NSMapTable *settingMessageMap;
@property (retain) HMDUserMessagePolicy *onlyOwnerAllowedUserPolicy;
@property (retain) HMDUserMessagePolicy *sharedAdminAllowedUserPolicy;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)registerForMessages;
- (BOOL)_decodeUpdateValueMessagePayload:(id)a0 outValue:(id *)a1;
- (void)_handleAddConstraint:(id)a0;
- (void)_handleRemoveConstraint:(id)a0;
- (void)_handleReplaceConstraints:(id)a0;
- (void)_handleReplaceConstraintsForKeyPath:(id)a0;
- (void)_handleSettingUpdateValue:(id)a0;
- (void)_handleSettingUpdateValueByKeyPath:(id)a0;
- (void)_handleUpdatedConstraints:(id)a0;
- (void)configureForSetting:(id)a0 allowSharedAdminEditConstraints:(BOOL)a1;
- (void)configureWithMessageDispatcher:(id)a0 home:(id)a1;
- (id)messageMapperForSetting:(id)a0;
- (void)notifyOfUpdatedValue:(id)a0 settingKeyPath:(id)a1;
- (BOOL)processReplaceConstraintMessage:(id)a0 outConstraintsToAdd:(id *)a1 outConstraintIdsToRemove:(id *)a2;
- (void)registerForSettingMessages:(id)a0;
- (void)relayReplaceConstraints:(id)a0 constraintIdsToRemove:(id)a1 keyPath:(id)a2 destination:(id)a3 completion:(id /* block */)a4;
- (void)relayUpdateValue:(id)a0 keyPath:(id)a1 destination:(id)a2 completion:(id /* block */)a3;
- (void)unconfigureFromSetting:(id)a0;

@end
