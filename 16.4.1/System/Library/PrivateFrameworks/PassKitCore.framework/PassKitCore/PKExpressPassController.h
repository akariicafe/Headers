@protocol PKPassLibraryDataProvider, PKPaymentDataProvider;

@interface PKExpressPassController : NSObject {
    id<PKPaymentDataProvider> _paymentDataProvider;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    BOOL _isForWatch;
    BOOL _hasSupportsExpressForAutomaticSelectionTechnologyTypeCheck;
}

@property (weak, nonatomic) id presentingViewController;
@property (nonatomic) long long apiVersion;

- (void).cxx_destruct;
- (id)initWithPaymentDataProvider:(id)a0 passLibraryDataProvider:(id)a1 isForWatch:(BOOL)a2;
- (void)conflictingExpressPassesWithPassInformation:(id)a0 completion:(id /* block */)a1;
- (BOOL)deviceUsesAutomaticAuthorization;
- (void)disableExpressModeForPass:(id)a0 withCompletion:(id /* block */)a1;
- (id)eligibleExpressUpgradeRequestsForPass:(id)a0;
- (void)enableExpressModeWithPassInformation:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (id)expressModeSupportedForPass:(id)a0;
- (id)expressModeUpgradeRequestForPass:(id)a0;
- (id)expressState;
- (BOOL)hasEligibleExpressUpgradeRequestForPass:(id)a0;
- (BOOL)isExpressModeEnabledForPass:(id)a0;
- (BOOL)supportsLowPowerExpressMode;
- (void)upgradeExpressModeForPass:(id)a0 withCredential:(id)a1 completion:(id /* block */)a2;
- (id)validExpressModeUpgradeRequestForPass:(id)a0;

@end
