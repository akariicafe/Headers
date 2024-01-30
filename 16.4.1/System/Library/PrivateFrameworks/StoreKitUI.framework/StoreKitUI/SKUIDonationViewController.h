@class SKUIDonationConfiguration, NSString, SKUIClientContext, NSOperationQueue, UIViewController;

@interface SKUIDonationViewController : UINavigationController {
    SKUIDonationConfiguration *_donationConfiguration;
    UIViewController *_placeholderViewController;
}

@property (readonly, nonatomic) NSString *charityIdentifier;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cancelButtonAction:(id)a0;
- (id)_initSKUIDonationViewController;
- (void)_configurationDidLoadWithResult:(BOOL)a0 error:(id)a1;
- (void)_finishAuthenticateWithResponse:(id)a0 error:(id)a1;
- (void)_loadDonationConfiguration;
- (id)initWithCharityIdentifier:(id)a0;

@end
