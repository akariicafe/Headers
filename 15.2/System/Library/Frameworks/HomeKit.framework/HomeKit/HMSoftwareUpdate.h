@class NSDate, NSUUID, HMSoftwareUpdateDocumentation, HMAccessory, HMSoftwareUpdateDocumentationMetadata, NSString, _HMContext, NSObject, HMFSoftwareVersion, HMFUnfairLock;
@protocol OS_dispatch_queue, HMSoftwareUpdateDelegate;

@interface HMSoftwareUpdate : NSObject <HMFMessageReceiver, HMFLogging, HMObjectMerge, NSSecureCoding> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (weak) HMAccessory *accessory;
@property (nonatomic) unsigned long long needsAttentionReasons;
@property (copy) NSUUID *identifier;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (readonly) unsigned long long updateType;
@property (weak) id<HMSoftwareUpdateDelegate> delegate;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy) HMFSoftwareVersion *version;
@property (readonly) long long state;
@property (readonly) unsigned long long downloadSize;
@property (readonly) double installDuration;
@property (readonly, getter=isDocumentationAvailable) BOOL documentationAvailable;
@property (readonly) HMSoftwareUpdateDocumentation *documentation;
@property (readonly) NSDate *releaseDate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)setState:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void)setUpdateType:(unsigned long long)a0;
- (void)configureWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_unconfigure;
- (id)messageDestination;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_registerNotificationHandlers;
- (id)initWithVersion:(id)a0 downloadSize:(unsigned long long)a1;
- (id)initWithVersion:(id)a0 downloadSize:(unsigned long long)a1 state:(long long)a2;
- (id)initWithVersion:(id)a0 downloadSize:(unsigned long long)a1 state:(long long)a2 documentationMetadata:(id)a3;
- (id)initWithVersion:(id)a0 downloadSize:(unsigned long long)a1 state:(long long)a2 installDuration:(double)a3 documentationMetadata:(id)a4;
- (id)initWithVersion:(id)a0 downloadSize:(unsigned long long)a1 state:(long long)a2 installDuration:(double)a3 documentationMetadata:(id)a4 releaseDate:(id)a5;
- (void)_handleUpdatedState:(id)a0;
- (void)updateState:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setDocumentationMetadata:(id)a0;
- (void)_handleUpdatedDocumentationMetadata:(id)a0;
- (void)updateDocumentationMetadata:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDocumentation:(id)a0;
- (void)requestDocumentation;
- (void)_handleUpdatedDocumentation:(id)a0;
- (void)fetchNeedsAttentionReasonsWithCompletionHandler:(id /* block */)a0;
- (void)_handleUpdatedNeedsAttentionReasonsMessage:(id)a0;
- (void)_requestNeedsAttentionReasonsWithCompletionHandler:(id /* block */)a0;

@end
