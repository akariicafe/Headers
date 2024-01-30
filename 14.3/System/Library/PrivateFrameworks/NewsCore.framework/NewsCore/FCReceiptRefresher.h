@class NSString, SKReceiptRefreshRequest, NFPendingPromise;

@interface FCReceiptRefresher : NSObject <SKRequestDelegate, FCReceiptRefresherType>

@property (copy, nonatomic) NSString *restoreBundleID;
@property (retain, nonatomic) SKReceiptRefreshRequest *request;
@property (retain, nonatomic) NFPendingPromise *pendingPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)refreshReceiptDirectoryURLWithBundleID:(id)a0;
- (id)refreshForPurchase:(id)a0;
- (void)requestDidFinish:(id)a0;

@end
