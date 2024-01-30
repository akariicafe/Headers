@class UIFont, NSArray, NSString, NSLayoutConstraint, UIButton;
@protocol EKUIEventStatusButtonsViewDelegate;

@interface EKUIEventStatusButtonsView : UIView <UIPointerInteractionDelegate> {
    NSArray *_buttons;
    UIFont *_font;
    double _outsideMargin;
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    double _baselineFromBoundsTop;
    BOOL _forcesSingleButtonToCenter;
    BOOL _inboxStyle;
    NSArray *_currentConstraints;
}

@property (weak, nonatomic) id<EKUIEventStatusButtonsViewDelegate> delegate;
@property (nonatomic) long long selectedAction;
@property (retain, nonatomic) NSArray *actions;
@property (readonly, nonatomic) UIButton *leadingButton;
@property (readonly, nonatomic) UIButton *centerButton;
@property (readonly, nonatomic) UIButton *trailingButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } buttonsTouchInsets;
@property (nonatomic) long long textSizeMode;
@property (nonatomic) BOOL disableButtonHighlights;
@property (readonly, nonatomic) UIFont *font;
@property (nonatomic) BOOL shouldUseVerticalLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isActionDestructive:(long long)a0;
+ (id)buttonTitleForAction:(long long)a0 orb:(BOOL)a1;
+ (id)imageForAction:(long long)a0 selected:(BOOL)a1;

- (id)buttonForAction:(long long)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)buttonTapped:(id)a0;
- (void)updateForMiniBarState:(BOOL)a0;
- (long long)_actionForButton:(id)a0;
- (id)_fontWithSize:(double)a0 selected:(BOOL)a1;
- (void)_setupButtons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actions:(id)a1 delegate:(id)a2 options:(unsigned long long)a3;
- (void)_setupConstraints;
- (id)_newToolbarButton;
- (double)baselineFromBoundsTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actions:(id)a1 delegate:(id)a2;
- (double)_defaultFontSizeForButtons;
- (void)_updateButtonFonts:(id)a0;
- (void)findPointerInteractionWithButton:(id)a0 actions:(id /* block */)a1;
- (void)_updateButtonFontsWithSize:(double)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (long long)_buttonIndexForAction:(long long)a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (double)_updateFontFromDelegate;
- (void)updateFonts;
- (double)_minimumFontSize;
- (id)_newButtonDivider;
- (void)_updateSelectionToButton:(id)a0;
- (void).cxx_destruct;
- (double)_buttonFontSizeFromDelegate;
- (id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)a0 endingAt:(unsigned long long)a1 resultingViews:(id)a2;
- (BOOL)_shouldCenterButton;

@end
