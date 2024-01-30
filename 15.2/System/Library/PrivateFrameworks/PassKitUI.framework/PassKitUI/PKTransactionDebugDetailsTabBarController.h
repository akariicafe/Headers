@class PKTransactionSourceCollection, PKTransactionCloudKitDebugDetailsViewController, PKTransactionSpotlightDebugDetailsViewController, PKPaymentTransaction, UIBarButtonItem;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController {
    UIBarButtonItem *_shareButton;
    PKPaymentTransaction *_transaction;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKTransactionCloudKitDebugDetailsViewController *_cloudKitViewController;
    PKTransactionSpotlightDebugDetailsViewController *_spotlightViewController;
}

- (void).cxx_destruct;
- (void)_handleShareButton:(id)a0;
- (id)initWithTransaction:(id)a0 transactionSourceCollection:(id)a1;

@end
