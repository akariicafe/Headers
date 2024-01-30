@class NSString, CAContext, BSPortDeathWatcher, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSnapshotCATransactionHandler : HMFObject <HMFLogging>

@property (retain, nonatomic) CAContext *snapshotContext;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) BSPortDeathWatcher *backboardServicesWatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (void)_createSnapshotContext;
- (void)_backboardServicesRelaunched;
- (id)createSlotWithFilePath:(id)a0;
- (void)fillSlotWithIdentifier:(id)a0 filePath:(id)a1;
- (void)clearSlotWithIdentifier:(id)a0;
- (id)_createSlotWithFilePath:(id)a0 snapshotCATransaction:(id)a1;
- (void)deleteSlotWithIdentifier:(id)a0 filePath:(id)a1;
- (void)_deleteSlotWithIdentifier:(id)a0 filePath:(id)a1 snapshotCATransaction:(id)a2;
- (struct CGImage { } *)createSnapshotCGImageRef:(id)a0;

@end
