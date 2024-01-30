@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) BOOL needsZoneishPCS;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) BOOL shouldCreateZoneishPCS;
@property (nonatomic) BOOL rolledPCSForZone;

- (void)_saveNewPCSOnZone:(id)a0 completion:(id /* block */)a1;
- (BOOL)_checkAndUpdateZonePCSIfNeeded;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchDependentPCS;
- (void)_fetchDepedentPCSInSharedDatabase;
- (BOOL)_saveUpdatedPCSToServer;
- (id)itemTypeName;
- (void)_decryptZonePCSInSharedDatabase;
- (BOOL)_decryptPCS;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_savePCSDataToCache;
- (BOOL)hasAllPCSData;
- (void)_decryptZonePCSUsingServiceIdentities;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (void)_saveZoneToServer:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 zoneishPCS:(struct _OpaquePCSShareProtection { } *)a2 previousEtag:(id)a3 completion:(id /* block */)a4;
- (void)_handleDecryptedZonePCSData:(id)a0 withError:(id)a1;
- (void)_willRetryFetch;
- (void)_saveZoneToServer:(id)a0 completion:(id /* block */)a1;
- (BOOL)_createAdditionalPCS;

@end
