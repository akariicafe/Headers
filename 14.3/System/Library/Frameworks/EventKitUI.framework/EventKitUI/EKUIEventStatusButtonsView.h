@class UIFont, NSArray, NSString, NSLayoutConstraint, UIButton;
@protocol EKUIEventStatusButtonsViewDelegate;

@interface EKUIEventStatusButtonsView : UIView <_UICursorInteractionDelegate> {
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

- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1;
- (id)_fontWithSize:(double)a0 selected:(BOOL)a1;
- (void)_updateSelectionToButton:(id)a0;
- (id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)a0 endingAt:(unsigned long long)a1 resultingViews:(id)a2;
- (double)_minimumFontSize;
- (id)_newButtonDivider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actions:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (void)updateForMiniBarState:(BOOL)a0;
- (void)updateFonts;
- (void)updateConstraints;
- (void)_updateButtonFontsWithSize:(double)a0;
- (id)buttonForAction:(long long)a0;
- (void)findCursorInteractionWithButton:(id)a0 actions:(id /* block */)a1;
- (void)buttonTapped:(id)a0;
- (id)cursorInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (double)_defaultFontSizeForButtons;
- (long long)_buttonIndexForAction:(long long)a0;
- (double)baselineFromBoundsTop;
- (id)_newToolbarButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actions:(id)a1 delegate:(id)a2 options:(unsigned long long)a3;
- (BOOL)_shouldCenterButton;
- (long long)_actionForButton:(id)a0;
- (double)_updateFontFromDelegate;
- (void)_setupButtons;
- (void)_updateButtonFonts:(id)a0;
- (void)_setupConstraints;

@end
