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

- (id)init;
- (void).cxx_destruct;
- (void)_backboardServicesRelaunched;
- (id)_createSlotWithFilePath:(id)a0 snapshotCATransaction:(id)a1;
- (void)_createSnapshotContext;
- (void)_deleteSlotWithIdentifier:(id)a0 filePath:(id)a1 snapshotCATransaction:(id)a2;
- (void)clearSlotWithIdentifier:(id)a0;
- (id)createSlotWithFilePath:(id)a0;
- (struct CGImage { } *)createSnapshotCGImageRef:(id)a0;
- (void)deleteSlotWithIdentifier:(id)a0 filePath:(id)a1;
- (void)fillSlotWithIdentifier:(id)a0 filePath:(id)a1;

@end
