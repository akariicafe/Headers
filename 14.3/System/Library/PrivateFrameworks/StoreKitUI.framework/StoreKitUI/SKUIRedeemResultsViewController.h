@class SKUIRedeem;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController

@property (retain, nonatomic) SKUIRedeem *redeem;
@property (nonatomic) long long redeemCategory;

+ (BOOL)canShowResultsForRedeem:(id)a0;
+ (id)redeemResultsControllerForRedeem:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_doneAction:(id)a0;
- (void)viewDidLoad;
- (id)initWithRedeem:(id)a0;

@end
