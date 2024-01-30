@class UIToolbar, UIView, NSLayoutConstraint, ICNoteEditorToolbarDisclosureView;
@protocol ICNoteEditorInputAccessoryViewDelegate;

@interface ICNoteEditorInputAccessoryView : UIView

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) float disclosureViewCloseTrailingOffset;
@property (retain, nonatomic) ICNoteEditorToolbarDisclosureView *disclosureView;
@property (retain, nonatomic) NSLayoutConstraint *disclosureViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *disclosureViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolbarTopConstraint;
@property (retain, nonatomic) UIView *bottomMarginView;
@property (retain, nonatomic) NSLayoutConstraint *bottomMarginViewTopConstraint;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (nonatomic) BOOL buttonsVisible;
@property (weak, nonatomic) id<ICNoteEditorInputAccessoryViewDelegate> delegate;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setButtonsVisible:(BOOL)a0;
- (id)accessibilityElements;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)hide;
- (BOOL)buttonsVisible;
- (void).cxx_destruct;
- (void)disclosureTapRecognizer:(id)a0;
- (void)hideDisclosureViewForTransition:(BOOL)a0;
- (void)showWithDelay:(double)a0;
- (void)toggleDisclosureViewCloseStateWithTap:(BOOL)a0;
- (void)updateDisclosureViewTrailingConstraint;
- (void)updateLayoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateToolbarColorsWithForceUpdate:(BOOL)a0;

@end
