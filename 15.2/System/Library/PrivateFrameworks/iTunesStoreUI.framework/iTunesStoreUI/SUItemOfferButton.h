@class NSString;

@interface SUItemOfferButton : UIButton

@property (nonatomic) long long animationHorizontalAlignment;
@property (copy, nonatomic) NSString *confirmationTitle;
@property (copy, nonatomic) NSString *itemOfferButtonStyle;
@property (copy, nonatomic) NSString *offerTitle;
@property (nonatomic) BOOL shouldShowConfirmation;
@property (nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;

+ (double)defaultAnimationDuration;
+ (id)itemOfferButtonStyleForItem:(id)a0 offer:(id)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_applyConfiguration:(struct { id x0; long long x1; long long x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; id x4; id x5; })a0;
- (void)dealloc;
- (void)_reloadButton;
- (void)setShowingConfirmation:(BOOL)a0 duration:(double)a1;
- (BOOL)configureForItem:(id)a0 offer:(id)a1;
- (struct { id x0; long long x1; long long x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; id x4; id x5; })_configurationForStyle:(id)a0;

@end
