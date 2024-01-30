@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (BOOL)_fetchDependentPCSInSharedDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchDependentPCS;
- (BOOL)_fetchPCSForPrivateZone;
- (id)itemTypeName;
- (BOOL)_decryptPCS;
- (BOOL)needsChainPCSCreation;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_savePCSDataToCache;
- (BOOL)hasAllPCSData;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (void).cxx_destruct;
- (BOOL)_createAdditionalPCS;

@end
