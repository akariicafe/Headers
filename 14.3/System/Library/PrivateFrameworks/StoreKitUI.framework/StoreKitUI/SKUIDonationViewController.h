@class SKUIDonationConfiguration, NSString, SKUIClientContext, NSOperationQueue, UIViewController;

@interface SKUIDonationViewController : UINavigationController {
    SKUIDonationConfiguration *_donationConfiguration;
    UIViewController *_placeholderViewController;
}

@property (readonly, nonatomic) NSString *charityIdentifier;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)_cancelButtonAction:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_finishAuthenticateWithResponse:(id)a0 error:(id)a1;
- (void)_configurationDidLoadWithResult:(BOOL)a0 error:(id)a1;
- (id)initWithCharityIdentifier:(id)a0;
- (id)_initSKUIDonationViewController;
- (void)_loadDonationConfiguration;

@end
