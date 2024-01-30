@class NSString, UIView;

@interface PKPaymentSetupAddToWatchOfferViewController : PKAddToWatchOfferViewController <PKAddToWatchOfferViewControllerDelegate> {
    UIView *_interactionDisabledView;
}

@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)shouldShowAddToWatchOfferForPass:(id)a0 inContext:(long long)a1 withCompletion:(id /* block */)a2;

- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithPaymentPass:(id)a0 context:(long long)a1 dismissalHandler:(id /* block */)a2;
- (void)_handleDismissal:(BOOL)a0;
- (void)_handleBridgeProvisioningError:(id)a0;
- (void)addToWatchOfferViewControllerDidRequestToAddToWatch:(id)a0;
- (void)addToWatchOfferViewControllerDidNotRequestToAddToWatch:(id)a0;

@end
