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

- (id)_titleFont;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (id)_titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)preferredFocusedView;
- (BOOL)_hasVibrantText;
- (id)_actionButton;
- (void)_actionButtonPressed:(id)a0;
- (double)_buttonAlpha;
- (id)_buttonBackgroundImageForStyle:(unsigned long long)a0 controlState:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_buttonContentEdgeInsets;
- (id)_buttonFont;
- (id)_buttonTextStyle;
- (double)_buttonVerticalSpacing;
- (struct CGColor { } *)_colorForButtonForStyle:(unsigned long long)a0 controlState:(unsigned long long)a1;
- (id)_flatTextColor;
- (BOOL)_hasVibrantButton;
- (double)_labelAlpha;
- (double)_labelVerticalSpacing;
- (id)_messageLabel;
- (id)_messageTextStyle;
- (void)_rebuildConstraints;
- (void)_updateForCurrentContentSizeCategory;
- (void)_updateViewHierarchy;
- (id)_vibrantBaseColor;
- (void)cleanupLingeringRotationState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 style:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 style:(unsigned long long)a2 includeBackdrop:(BOOL)a3;
- (void)windowDidRotateNotification:(id)a0;
- (void)windowWillAnimateRotateNotification:(id)a0;
- (void)windowWillRotateNotification:(id)a0;

@end
