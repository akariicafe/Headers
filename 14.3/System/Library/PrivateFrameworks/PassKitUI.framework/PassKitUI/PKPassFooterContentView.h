@class PKPaymentPass, UIButton, PKLinkedAppIconView, UIView, PKPass;
@protocol PKPassFooterContentViewDelegate;

@interface PKPassFooterContentView : UIView

@property (readonly, nonatomic) long long style;
@property (weak, nonatomic) id<PKPassFooterContentViewDelegate> delegate;
@property (readonly, nonatomic) PKPass *pass;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKLinkedAppIconView *appIconView;
@property (readonly, nonatomic) UIButton *infoButton;
@property (readonly, nonatomic) UIView *bottomRule;
@property (readonly, nonatomic, getter=isPassAuthorized) BOOL passAuthorized;
@property (readonly, nonatomic, getter=isPhysicalButtonRequired) BOOL physicalButtonRequired;
@property (readonly, nonatomic) long long coachingState;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) BOOL requestPileSuppression;

- (void)willBecomeVisibleAnimated:(BOOL)a0;
- (void)willBecomeHiddenAnimated:(BOOL)a0;
- (void)didBecomeVisibleAnimated:(BOOL)a0;
- (void)didBecomeHiddenAnimated:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setRequestPileSuppression:(BOOL)a0;
- (void)layoutSubviews;
- (void)_setCoachingState:(long long)a0;
- (void)showFullScreenBarcode;
- (void)_infoButtonPressed:(id)a0;
- (void)coachingStateDidChange;
- (void)invalidate;
- (id)initWithPass:(id)a0;
- (void)_setPhysicalButtonRequired:(BOOL)a0;
- (id)_buttonWithTitle:(id)a0;

@end
