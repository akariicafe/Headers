@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchPCSForPrivateZone;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (void).cxx_destruct;
- (BOOL)hasAllPCSData;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_decryptPCS;
- (id)itemTypeName;
- (BOOL)_fetchDependentPCSInSharedDatabase;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_savePCSDataToCache;
- (BOOL)_createAdditionalPCS;
- (BOOL)needsChainPCSCreation;

@end
