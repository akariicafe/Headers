@class SKUIFocusedTouchGestureRecognizer, SKUIGiftConfirmView, SKUIGiftPurchaseRequest;

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController {
    SKUIGiftConfirmView *_confirmView;
    BOOL _isShowingConfirmation;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;
}

- (void)loadView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)_termsButtonAction:(id)a0;
- (id)_buyButtonTitle;
- (id)_newBuyBarButtonItemWithTitle:(id)a0;
- (void)_purchaseGift;
- (void)_setShowingConfirmation:(BOOL)a0 animated:(BOOL)a1;
- (void)_removeCancelGestureRecognizer;
- (void)_cancelBuyConfirmation:(id)a0;
- (void)_showSuccessPage;
- (void)_finishPurchaseWithResult:(BOOL)a0 errorMessage:(id)a1;
- (id)_confirmButtonTitle;
- (void)_buyButtonAction:(id)a0;

@end
