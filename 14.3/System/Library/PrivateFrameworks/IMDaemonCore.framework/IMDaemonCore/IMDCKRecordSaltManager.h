@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain) NSString *cachedSalt;

+ (id)sharedInstance;

- (id)_container;
- (id)init;
- (void)dealloc;
- (void)_scheduleOperation:(id)a0;
- (void)clearLocalSyncState;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)a0 forceFetch:(BOOL)a1;
- (id)_CKUtilitiesSharedInstance;
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(id /* block */)a0;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)a0;
- (void)deleteDeDupeRecordZone;

@end
