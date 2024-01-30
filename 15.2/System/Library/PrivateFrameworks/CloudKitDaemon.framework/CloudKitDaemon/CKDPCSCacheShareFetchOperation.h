@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (BOOL)_fetchPCSDataFromServer;
- (BOOL)hasAllPCSData;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_decryptPCS;
- (id)itemTypeName;
- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_savePCSDataToCache;

@end
