@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (BOOL)_fetchPCSDataFromServer;
- (id)itemTypeName;
- (BOOL)_decryptPCS;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_savePCSDataToCache;
- (BOOL)hasAllPCSData;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;

@end
