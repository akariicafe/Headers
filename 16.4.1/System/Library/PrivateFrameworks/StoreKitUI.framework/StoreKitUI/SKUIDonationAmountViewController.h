@class NSString, SKUIGiftValidationResponse, SKUIDonationAmountView, SKUIGiftPurchaseRequest, SKUIGiftValidator;

@interface SKUIDonationAmountViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {
    SKUIDonationAmountView *_amountView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    BOOL _tappedNextWhileValidating;
    SKUIGiftValidator *_validator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)_cancelButtonAction:(id)a0;
- (void)_amountChangedNotification:(id)a0;
- (void)_donateButtonAction:(id)a0;
- (void)_finishPurchaseWithResult:(BOOL)a0 errorMessage:(id)a1;
- (void)_finishValidationWithResponse:(id)a0 error:(id)a1;
- (void)_performActionAfterValidation;
- (void)_reenableAfterFailure;
- (void)_setDonationButtonEnabled:(BOOL)a0;
- (void)_validateDonation:(id)a0;
- (void)donationConfigurationController:(id)a0 didLoadLogoForCharity:(id)a1;
- (id)initWithCharity:(id)a0 configuration:(id)a1;

@end
