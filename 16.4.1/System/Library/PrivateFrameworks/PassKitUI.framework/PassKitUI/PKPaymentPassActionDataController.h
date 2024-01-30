@class PKPaymentPass, NSString, NSArray, PKPaymentWebService, PKTransitBalanceModel, UIViewController;
@protocol PKPaymentDataProvider;

@interface PKPaymentPassActionDataController : NSObject <PKSelectActionViewControllerDelegate, PKPerformActionViewControllerDelegate> {
    PKPaymentPass *_pass;
    NSArray *_actions;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    unsigned long long _actionType;
    PKTransitBalanceModel *_balanceModel;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPass:(id)a0 actions:(id)a1 paymentDataProvider:(id)a2 webService:(id)a3 actionType:(unsigned long long)a4 balanceModel:(id)a5;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)performActionViewControllerDidPerformAction:(id)a0;
- (void)selectActionViewControllerDidCancel:(id)a0;
- (void)selectActionViewControllerDidPerformAction:(id)a0;

@end
