@class NSUUID, NSDate, HMSoftwareUpdateDocumentationMetadata, NSString, NSArray, NSSet, HMFMessageDispatcher, NSObject, HMFSoftwareVersion, HMDAccessory, HMDSoftwareUpdateModel;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDSoftwareUpdate : HMFObject <HMFLogging, HMFObject, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (copy) NSUUID *identifier;
@property BOOL allowExtraUpdate;
@property (readonly, copy) HMDSoftwareUpdateModel *model;
@property (weak) HMDAccessory *accessory;
@property (readonly, copy) HMFSoftwareVersion *version;
@property (readonly) long long state;
@property (readonly) unsigned long long downloadSize;
@property (readonly) double installDuration;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (readonly) unsigned long long updateType;
@property unsigned long long needsAttentionReasons;
@property (readonly) NSDate *releaseDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)modelNamespace;

- (void)setReleaseDate:(id)a0;
- (void)setState:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void)setUpdateType:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id)messageDestination;
- (void)dealloc;
- (id)initWithModel:(id)a0;
- (id)initWithVersion:(id)a0 downloadSize:(unsigned long long)a1 state:(long long)a2 installDuration:(double)a3 documentationMetadata:(id)a4 releaseDate:(id)a5;
- (void)setDocumentationMetadata:(id)a0;
- (void)registerForMessages;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (void)configureWithAccessory:(id)a0 messageDispatcher:(id)a1;
- (void)updateLocalState:(long long)a0;
- (void)_updateState:(long long)a0 message:(id)a1 options:(id)a2;
- (void)_handleUpdateState:(id)a0;
- (void)_handleUpdateDocumentationMetadata:(id)a0;
- (void)_handleDocumentationRequest:(id)a0;
- (void)_handleDocumentationStateNotification:(id)a0;
- (void)_handleNeedsAttentionReasonsRequest:(id)a0;
- (id)transactionWithObjectChangeType:(unsigned long long)a0 forAccessoryUUID:(id)a1;

@end
