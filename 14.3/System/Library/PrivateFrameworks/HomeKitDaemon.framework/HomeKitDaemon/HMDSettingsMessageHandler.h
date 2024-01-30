@class HMFMessageDispatcher, NSMapTable, HMDUserMessagePolicy, NSString, NSObject;
@protocol HMDSettingsMessageController, OS_dispatch_queue;

@interface HMDSettingsMessageHandler : HMFObject <HMDSettingsMessageHandlerProtocol, HMFLogging>

@property (retain) NSMapTable *settingMessageMap;
@property (retain) NSMapTable *settingGroupMessageMap;
@property (weak) id<HMDSettingsMessageController> messageController;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) HMDUserMessagePolicy *anyUserAllowedPolicy;
@property BOOL isCurrentUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)registerForMessages;
- (id)messageMapperForSetting:(id)a0;
- (void)registerForSettingMessages:(id)a0;
- (id)messageMapperForSettingGroup:(id)a0;
- (void)registerForSettingGroupMessages:(id)a0;
- (id)_checkIsCurrentUser:(id)a0;
- (BOOL)_applyOnlyCurrentUserAllowedPolicy:(id)a0;
- (void)_handleUpdateValue:(id)a0 setting:(id)a1;
- (void)configureForSetting:(id)a0;
- (void)unconfigureFromSetting:(id)a0;
- (void)configureForSettingGroup:(id)a0;
- (void)unconfigureFromSettingGroup:(id)a0;
- (void)configureWithMessageDispatcher:(id)a0 home:(id)a1 isCurrentUser:(BOOL)a2;
- (void)_handleAddConstraint:(id)a0 setting:(id)a1;
- (void)_handleRemoveConstraint:(id)a0 setting:(id)a1;
- (void)_handleReplaceConstraints:(id)a0 setting:(id)a1;
- (void)_handleUpdatedConstraints:(id)a0 setting:(id)a1;

@end
