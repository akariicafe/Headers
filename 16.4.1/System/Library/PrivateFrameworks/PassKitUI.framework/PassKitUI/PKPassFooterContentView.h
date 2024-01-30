@class PKPaymentPass, UIButton, PKLinkedAppIconView, UIView, PKSecureElementPass, PKPass;
@protocol PKPassFooterContentViewDelegate;

@interface PKPassFooterContentView : UIView {
    UIButton *_infoButton;
}

@property (nonatomic) double infoButtonAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } infoButtonFrame;
@property (readonly, nonatomic) long long style;
@property (weak, nonatomic) id<PKPassFooterContentViewDelegate> delegate;
@property (readonly, nonatomic) PKPass *pass;
@property (readonly, nonatomic) PKSecureElementPass *secureElementPass;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKLinkedAppIconView *appIconView;
@property (readonly, nonatomic) UIView *bottomRule;
@property (readonly, nonatomic, getter=isPassAuthorized) BOOL passAuthorized;
@property (readonly, nonatomic, getter=isPhysicalButtonRequired) BOOL physicalButtonRequired;
@property (readonly, nonatomic) long long coachingState;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) BOOL requestPileSuppression;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithPass:(id)a0;
- (void)_didInvalidate;
- (id)_buttonWithTitle:(id)a0 action:(id)a1;
- (void)_infoButtonPressed:(id)a0;
- (void)_setCoachingState:(long long)a0;
- (void)_setPhysicalButtonRequired:(BOOL)a0;
- (void)_setRequestPileSuppression:(BOOL)a0;
- (void)coachingStateDidChange;
- (void)didBecomeHiddenAnimated:(BOOL)a0;
- (void)didBecomeVisibleAnimated:(BOOL)a0;
- (void)showFullScreenBarcode;
- (void)willBecomeHiddenAnimated:(BOOL)a0;
- (void)willBecomeVisibleAnimated:(BOOL)a0;

@end
