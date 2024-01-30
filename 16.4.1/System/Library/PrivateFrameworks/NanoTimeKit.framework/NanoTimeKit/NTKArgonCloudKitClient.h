@class CKDatabase, NSString, NSURL, NSError, CKRecordZoneID, NSObject;
@protocol OS_dispatch_queue;

@interface NTKArgonCloudKitClient : NSObject <NTKArgonFetcherProviding, NTKArgonPublisherProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) CKRecordZoneID *recordZoneID;
@property (retain, nonatomic) NSError *recordZoneError;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, copy, nonatomic) NSURL *temporaryStorageURL;
@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClientQueue;

- (void)fetchNewRecordsSinceChangeToken:(id)a0 forReason:(long long)a1 completion:(id /* block */)a2;
- (void)unpublishKeyDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_publishRecord:(id)a0 completion:(id /* block */)a1;
- (void)requestIdentifierTokenForCurrentUserWithCompletion:(id /* block */)a0;
- (id)initWithCloudKitDatabase:(id)a0 temporaryStorageURL:(id)a1 zoneName:(id)a2;
- (void)publishKeyDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)initWithCloudKitDatabase:(id)a0 zoneName:(id)a1;
- (void)_fetchNewRecordsSinceChangeToken:(id)a0 forReason:(long long)a1 attemptNumber:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_unpublishRecordsWithPartialQueryOperation:(id)a0 accumulatedRecords:(id)a1 completion:(id /* block */)a2;
- (void)_unpublishRecordsOfType:(id)a0 matchingPredicate:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
