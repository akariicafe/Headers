@class UIBarButtonItem, PKTransactionCloudKitDebugDetailsViewController, PKTransactionSpotlightDebugDetailsViewController, PKTransactionSource, PKPaymentTransaction;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController {
    UIBarButtonItem *_shareButton;
    PKPaymentTransaction *_transaction;
    PKTransactionSource *_transactionSource;
    PKTransactionCloudKitDebugDetailsViewController *_cloudKitViewController;
    PKTransactionSpotlightDebugDetailsViewController *_spotlightViewController;
}

- (void).cxx_destruct;
- (void)_handleShareButton:(id)a0;
- (id)initWithTransaction:(id)a0 transactionSource:(id)a1;

@end
