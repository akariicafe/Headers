@class CKDatabase, NSString, CKRecordZone, _KSRequestThrottle, NSObject, CKContainer;
@protocol OS_dispatch_queue, _KSCloudKitManagerDelegate;

@interface _KSCloudKitManager : NSObject {
    NSObject<OS_dispatch_queue> *_ckWorkQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _KSRequestThrottle *_accountChangeThrottle;
    _KSRequestThrottle *_fetchZoneThrottle;
}

@property (retain, nonatomic) CKContainer *cloudKitContainer;
@property (retain, nonatomic) CKDatabase *cloudKitDatabase;
@property (retain, nonatomic) CKDatabase *publicDatabase;
@property (readonly, nonatomic) NSString *recordZoneKey;
@property (readonly, nonatomic) NSString *subscriptionKey;
@property (readonly, nonatomic) NSString *lastKnownUserKey;
@property (nonatomic) BOOL recordZoneOperationInProgress;
@property (nonatomic) BOOL subscriptionOperationInProgress;
@property (retain, nonatomic) CKRecordZone *recordZone;
@property (weak, nonatomic) id<_KSCloudKitManagerDelegate> delegate;

+ (id)prepareContainerForID:(id)a0;

- (void)addOperation:(id)a0;
- (void)fetchRecordsWithPriority:(unsigned long long)a0 changeToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupAccountDidChange:(BOOL)a0;
- (id)recordWithName:(id)a0 type:(id)a1 cloudData:(id)a2 attributes:(id)a3;
- (void)shouldDetectAccountChangeWithResponse:(id /* block */)a0;
- (BOOL)isAccountAvailable;
- (void)_ckFetchRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)needsDeviceToDevice;
- (id)recordWithName:(id)a0 type:(id)a1 attributes:(id)a2 encryptedFields:(id)a3;
- (void)setupSubscription;
- (void)_checkAccountStatusWithCompletionHandler:(id /* block */)a0 withRetryCount:(unsigned long long)a1;
- (id)initWithContainer:(id)a0 recordZoneName:(id)a1;
- (void)accountStatusDidChange:(id)a0;
- (void)fetchRecordsWithPriority:(unsigned long long)a0 changeToken:(id)a1 completionHandler:(id /* block */)a2 retryCount:(unsigned long long)a3;
- (void)dealloc;
- (void)addOperation:(id)a0 priority:(unsigned long long)a1;
- (void)fetchPublicRecordsWithNames:(id)a0 completionHandler:(id /* block */)a1;
- (id)resolveConflicts:(id)a0;
- (id)recordIDForName:(id)a0;
- (void)resetZoneWithDelete:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)_inconvenientOperation:(id)a0;
- (id)recordWithName:(id)a0 type:(id)a1 attributes:(id)a2;
- (void)updateRecords:(id)a0 deleteRecordIDs:(id)a1 withPriority:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)recordWithName:(id)a0 type:(id)a1 cloudData:(id)a2 attributes:(id)a3 encryptedFields:(id)a4;
- (void)setupRecordZoneWithCompletionHandler:(id /* block */)a0 ignoreDefaults:(BOOL)a1;
- (id)initWithRecordZoneName:(id)a0;
- (void)updateRecords:(id)a0 deleteRecordIDs:(id)a1 withPriority:(unsigned long long)a2 completionHandler:(id /* block */)a3 retryCount:(unsigned long long)a4;
- (void)copyFieldsFromRecord:(id)a0 toRecord:(id)a1;
- (void)_submitFetchRecordsOperation:(id)a0 withPriority:(unsigned long long)a1 changeToken:(id)a2 completionHandler:(id /* block */)a3 retryCount:(unsigned long long)a4;
- (void)_ckDeleteRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)identityUpdated:(id)a0;
- (void).cxx_destruct;
- (void)queryAccountStatusWithCompletionHandler:(id /* block */)a0;
- (void)_ckSaveRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)userIdentityWithResponse:(id /* block */)a0;

@end
