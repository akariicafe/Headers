@class SKUIRedeem;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController

@property (retain, nonatomic) SKUIRedeem *redeem;
@property (nonatomic) long long redeemCategory;

+ (BOOL)canShowResultsForRedeem:(id)a0;
+ (id)redeemResultsControllerForRedeem:(id)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_doneAction:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRedeem:(id)a0;

@end
