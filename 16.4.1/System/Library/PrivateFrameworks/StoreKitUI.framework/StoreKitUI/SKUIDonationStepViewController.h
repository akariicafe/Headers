@class SKUIGiftCharity, SKUIDonationConfiguration, SKUIDonationViewController, NSOperationQueue;

@interface SKUIDonationStepViewController : UIViewController

@property (readonly, nonatomic) SKUIGiftCharity *charity;
@property (readonly, nonatomic) SKUIDonationConfiguration *donationConfiguration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) SKUIDonationViewController *donationViewController;

- (void).cxx_destruct;
- (id)initWithCharity:(id)a0 configuration:(id)a1;

@end
