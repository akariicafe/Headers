@class NSSet, PUReviewScreenDoneButton, UIButton;

@interface PUReviewScreenTopBar : UIView

@property (copy, nonatomic) NSSet *availableButtons;
@property (copy, nonatomic) NSSet *enabledButtons;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) struct CGPoint { double x; double y; } doneButtonCenterAlignmentPoint;
@property (readonly, nonatomic) PUReviewScreenDoneButton *doneButton;
@property (readonly, nonatomic) UIButton *retakeButton;

+ (id)supportedButtons;

- (void)_updateBackgroundColor;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_updateButtonVisibility;
- (id)_buttonForButtonType:(long long)a0;
- (BOOL)_isButtonAvailable:(long long)a0;
- (BOOL)_isButtonEnabled:(long long)a0;

@end
