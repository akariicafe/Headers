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
+ (id)keyOfReferenceDate:(id)a0;
+ (id)referenceDateOfRecord:(id)a0;
+ (id)referenceRecordIDForScheme:(id)a0 dsId:(id)a1;
+ (id)spanRecordIDForScheme:(id)a0 referenceRecordID:(id)a1 serialNumber:(unsigned long long)a2;
+ (id)spanRecordKeyWithReferenceRecord:(id)a0 serialNumber:(unsigned long long)a1;
+ (BOOL)updateRecord:(id)a0 isSpanRecord:(BOOL)a1 scheme:(id)a2 expectedKey:(id)a3 expiration:(id)a4 reset:(BOOL)a5;

- (id)recordWithID:(id)a0;
- (id)debugInfo;
- (void).cxx_destruct;
- (void)recordWasSaved:(id)a0;
- (void)_generateFutureRecordsForScheme:(id)a0 referenceRecord:(id)a1;
- (void)accountDidChangeWithUserRecordID:(id)a0;
- (void)clearLocalData;
- (void)cloudKitLocalDB:(id)a0 didChangeRecord:(id)a1;
- (void)fetchChangesIfNeeded;
- (void)generateFutureRecordsForScheme:(id)a0 referenceRecord:(id)a1;
- (id)initWithContainerIdentifer:(id)a0 enableSync:(BOOL)a1;
- (id)maintainSchemes:(id)a0 options:(id)a1;
- (id)promiseForRecordWithID:(id)a0 timeout:(double)a1 qualityOfService:(long long)a2 existingOnly:(BOOL)a3 updateRecordMaybe:(id /* block */)a4;
- (void)recordWasDeleted:(id)a0;
- (void)recordWasFailedToSave:(id)a0;
- (void)recordWasFetched:(id)a0;
- (id)recordWithID:(id)a0 qualityOfService:(long long)a1 updateRecordMaybe:(id /* block */)a2 error:(id *)a3;
- (id)referenceRecordForScheme:(id)a0 dsId:(id)a1 date:(id)a2 reset:(BOOL)a3 timeout:(double)a4 existingOnly:(BOOL)a5 qualityOfService:(long long)a6;
- (id)resetSchemes:(id)a0 options:(id)a1;
- (id)secretForScheme:(id)a0 options:(id)a1;
- (id)spanRecordForScheme:(id)a0 span:(id)a1 timeout:(double)a2 existingOnly:(BOOL)a3 qualityOfService:(long long)a4 referenceRecord:(id)a5;
- (void)syncEngineDidStartWithError:(id)a0;
- (id)syncForSchemes:(id)a0 options:(id)a1;

@end
