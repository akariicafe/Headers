@class UIView, NSString, UIButton, _UIBackdropView, NSMutableArray, NSLayoutConstraint, UILabel, UIScrollView;

@interface _UIContentUnavailableView : UIView {
    unsigned long long _style;
    _UIBackdropView *_backdrop;
    UIView *_containerView;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *titleToMessageConstraint;
    NSLayoutConstraint *messageToButtonConstraint;
    NSLayoutConstraint *buttonHeightConstraint;
    UIView *_fromSnapshot;
    UIView *_toSnapshot;
    struct CGSize { double width; double height; } _fromSnapshotSize;
    NSMutableArray *_containerViewContraints;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (nonatomic) unsigned long long vibrantOptions;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)_titleLabel;
- (void)layoutSubviews;
- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_buttonFont;
- (id)_messageLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (double)_labelAlpha;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (id)_actionButton;
- (double)_buttonAlpha;
- (BOOL)_hasVibrantText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 style:(unsigned long long)a2 includeBackdrop:(BOOL)a3;
- (id)_flatTextColor;
- (double)_labelVerticalSpacing;
- (void)_updateForCurrentContentSizeCategory;
- (id)_messageTextStyle;
- (void)_rebuildConstraints;
- (BOOL)_hasVibrantButton;
- (struct CGColor { } *)_colorForButtonForStyle:(unsigned long long)a0 controlState:(unsigned long long)a1;
- (void)_updateViewHierarchy;
- (double)_buttonVerticalSpacing;
- (id)_vibrantBaseColor;
- (id)_buttonTextStyle;
- (void)_actionButtonPressed:(id)a0;
- (id)_buttonBackgroundImageForStyle:(unsigned long long)a0 controlState:(unsigned long long)a1;
- (void)windowWillRotateNotification:(id)a0;
- (void)windowWillAnimateRotateNotification:(id)a0;
- (void)windowDidRotateNotification:(id)a0;
- (void)cleanupLingeringRotationState;
- (id)preferredFocusedView;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 style:(unsigned long long)a2;

@end
