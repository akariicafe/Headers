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

+ (id)logCategory;
+ (id)sharedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)_createSnapshotContext;
- (id)_createSlot:(id)a0 snapshotCATransaction:(id)a1;
- (struct CGImage { } *)createSnapshotCGImageRef:(id)a0;
- (void)_deleteSlot:(id)a0 filePath:(id)a1 snapshotCATransaction:(id)a2;
- (void)_backboardServicesRelaunched;
- (id)createSlot:(id)a0;
- (void)deleteSlot:(id)a0 filePath:(id)a1;

@end
