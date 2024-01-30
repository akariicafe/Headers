@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) BOOL needsZoneishPCS;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) BOOL shouldCreateZoneishPCS;

- (BOOL)_saveUpdatedPCSToServer;
- (void)_willRetryFetch;
- (void)_saveZoneToServer:(id)a0 completion:(id /* block */)a1;
- (BOOL)_fetchDependentPCS;
- (id)itemTypeName;
- (void)_fetchDepedentPCSInSharedDatabase;
- (void)_saveNewPCSOnDefaultZone:(id)a0 completion:(id /* block */)a1;
- (void)_decryptZonePCSInSharedDatabase;
- (void)_handleDecryptedZonePCSData:(id)a0 withError:(id)a1;
- (BOOL)_createAdditionalPCS;
- (BOOL)_decryptPCS;
- (BOOL)_savePCSDataToCache;
- (void)_saveZoneToServer:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 zoneishPCS:(struct _OpaquePCSShareProtection { } *)a2 previousEtag:(id)a3 completion:(id /* block */)a4;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (void)_decryptZonePCSUsingServiceIdentities;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)hasAllPCSData;

@end
