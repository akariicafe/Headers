@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (BOOL)_fetchDependentPCS;
- (id)itemTypeName;
- (void).cxx_destruct;
- (BOOL)_createAdditionalPCS;
- (BOOL)_decryptPCS;
- (BOOL)_savePCSDataToCache;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)hasAllPCSData;
- (BOOL)needsChainPCSCreation;
- (BOOL)_fetchPCSForPrivateZone;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_decryptRecordPCSInSharedDatabase;

@end
