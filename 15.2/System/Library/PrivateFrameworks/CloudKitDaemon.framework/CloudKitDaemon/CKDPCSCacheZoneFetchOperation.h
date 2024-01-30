@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) BOOL needsZoneishPCS;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) BOOL shouldCreateZoneishPCS;

- (BOOL)_fetchDependentPCS;
- (void)_willRetryFetch;
- (void)_decryptZonePCSInSharedDatabase;
- (void)_decryptZonePCSUsingServiceIdentities;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_saveUpdatedPCSToServer;
- (BOOL)hasAllPCSData;
- (void)_handleDecryptedZonePCSData:(id)a0 withError:(id)a1;
- (BOOL)_fetchPCSDataFromDatabase;
- (void)_saveNewPCSOnZone:(id)a0 completion:(id /* block */)a1;
- (void)_saveZoneToServer:(id)a0 completion:(id /* block */)a1;
- (void)_fetchDepedentPCSInSharedDatabase;
- (BOOL)_decryptPCS;
- (id)itemTypeName;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_savePCSDataToCache;
- (BOOL)_createAdditionalPCS;
- (void)_saveZoneToServer:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 zoneishPCS:(struct _OpaquePCSShareProtection { } *)a2 previousEtag:(id)a3 completion:(id /* block */)a4;

@end
