@class HMDSettingsMessageHandler, NSString, HMFMessageDispatcher, NSUUID, NSObject;
@protocol HMDSettingsBackingStoreController, HMDSettingsMessageHandlerProtocol, HMDSettingTransactionReceiverProtocol, OS_dispatch_queue, HMDSettingsMetadataParserProtocol;

@interface HMDSettingsControllerDependency : NSObject <HMDSettingsControllerDependency>

@property (retain) id<HMDSettingsBackingStoreController> backingStoreController;
@property (readonly) id<HMDSettingsMetadataParserProtocol> metadataParser;
@property (readonly) NSString *metadataFileName;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (retain) HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol> *internalMessageHandler;
@property (readonly) id<HMDSettingsMessageHandlerProtocol> messageHandler;
@property (weak) id<HMDSettingTransactionReceiverProtocol> transactionReceiver;
@property (readonly) NSString *codingKey;
@property (readonly) NSUUID *parentIdentifier;
@property (readonly) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)loadMetadata;
- (id)createSettingRootGroupModelWithParentModelID:(id)a0;
- (id)createSettingGroupModelWithName:(id)a0 parent:(id)a1;
- (id)createSettingModelWithName:(id)a0 parent:(id)a1 type:(id)a2 properties:(id)a3;
- (id)settingValueForValue:(id)a0 type:(id)a1 constraintModels:(id)a2 error:(id *)a3;
- (id)settingModelForUpdateWithIdentifier:(id)a0 parentIdentifier:(id)a1 value:(id)a2;
- (id)initWithParentUUID:(id)a0 logName:(id)a1 queue:(id)a2 metadataFileName:(id)a3 codingKey:(id)a4;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1 backingStoreController:(id)a2 isCurrentUser:(BOOL)a3;

@end
