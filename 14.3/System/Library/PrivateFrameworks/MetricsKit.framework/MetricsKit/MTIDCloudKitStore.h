@class MTIDCloudKitPromiseManager, NSString, NSMutableDictionary, MTIDCloudKitLocalDB, NSObject, MTIDSyncEngine;
@protocol OS_dispatch_queue;

@interface MTIDCloudKitStore : NSObject <MTIDCloudKitLocalDBDelegate, MTIDSyncEngineDelegate, MTIDSecretStore>

@property (retain, nonatomic) NSString *containerIdentifier;
@property BOOL canSyncBetweenDevices;
@property (retain, nonatomic) MTIDSyncEngine *syncEngine;
@property (retain, nonatomic) MTIDCloudKitLocalDB *localDB;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableDictionary *generatedDates;
@property (retain, nonatomic) MTIDCloudKitPromiseManager *promiseManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordZoneID;
+ (id)referenceDateOfRecord:(id)a0;
+ (id)spanRecordIDForScheme:(id)a0 referenceRecordID:(id)a1 serialNumber:(unsigned long long)a2;
+ (id)spanRecordKeyWithReferenceRecord:(id)a0 serialNumber:(unsigned long long)a1;
+ (BOOL)updateRecord:(id)a0 isSpanRecord:(BOOL)a1 scheme:(id)a2 expectedKey:(id)a3 expiration:(id)a4 reset:(BOOL)a5;
+ (id)referenceRecordIDForScheme:(id)a0 dsId:(id)a1;
+ (id)keyOfReferenceDate:(id)a0;

- (void).cxx_destruct;
- (id)recordWithID:(id)a0;
- (id)debugInfo;
- (id)resetSchemes:(id)a0 options:(id)a1;
- (id)maintainSchemes:(id)a0 options:(id)a1;
- (id)secretForScheme:(id)a0 options:(id)a1;
- (void)clearLocalData;
- (void)_generateFutureRecordsForScheme:(id)a0 referenceRecord:(id)a1;
- (id)recordWithID:(id)a0 qualityOfService:(long long)a1 updateRecordMaybe:(id /* block */)a2 error:(id *)a3;
- (id)promiseForRecordWithID:(id)a0 timeout:(double)a1 qualityOfService:(long long)a2 updateRecordMaybe:(id /* block */)a3;
- (void)fetchChangesIfNeeded;
- (id)referenceRecordForScheme:(id)a0 dsId:(id)a1 date:(id)a2 reset:(BOOL)a3 timeout:(double)a4 qualityOfService:(long long)a5;
- (void)generateFutureRecordsForScheme:(id)a0 referenceRecord:(id)a1;
- (id)spanRecordForScheme:(id)a0 span:(id)a1 timeout:(double)a2 qualityOfService:(long long)a3 referenceRecord:(id)a4;
- (void)cloudKitLocalDB:(id)a0 didChangeRecord:(id)a1;
- (void)accountDidChangeWithUserRecordID:(id)a0;
- (void)syncEngineDidStartWithError:(id)a0;
- (void)recordWasSaved:(id)a0;
- (void)recordWasFailedToSave:(id)a0;
- (void)recordWasFetched:(id)a0;
- (void)recordWasDeleted:(id)a0;
- (id)initWithContainerIdentifer:(id)a0 enableSync:(BOOL)a1;

@end
