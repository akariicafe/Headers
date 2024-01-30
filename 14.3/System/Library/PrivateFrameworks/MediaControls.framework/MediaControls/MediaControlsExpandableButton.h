@class NSTimer, UIView, NSArray, NSString, MediaControlsExpandableButtonOption, MTVisualStylingProvider, NSMutableArray, UILabel;

@interface MediaControlsExpandableButton : UIControl <MTVisualStylingProviderObservingPrivate, _UICursorInteractionDelegate>

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *overlaySelectionView;
@property (retain, nonatomic) UIView *selectionView;
@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSTimer *messageTimer;
@property (nonatomic) BOOL toggleEnabled;
@property (nonatomic) BOOL displayMessage;
@property (nonatomic) BOOL resetTracking;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (retain, nonatomic) NSArray *options;
@property (readonly, nonatomic) MediaControlsExpandableButtonOption *selectedOption;
@property (nonatomic) long long selectedOptionIndex;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long axis;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) struct CGSize { double width; double height; } maximumExpandedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_cursorInteractionEnabled;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (void)cancelTrackingWithEvent:(id)a0;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_contentSizeCategoryDidChange;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)cursorInteraction:(id)a0 willExitRegion:(id)a1 withAnimator:(id)a2;
- (void)cursorInteraction:(id)a0 willEnterRegion:(id)a1 withAnimator:(id)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didTapButton:(id)a0;
- (void)layoutSubviews;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (void)_layoutLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_springAnimate:(id /* block */)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)showMessage:(id)a0;
- (id)initForControlCenter;
- (void)_layoutSelectionView;
- (void)_updateLabelVisualStyling;
- (long long)_buttonLayoutAxis;
- (void)_updateButtonsVisiblity;
- (void)_updateSelectionVisiblity;
- (void)_animateSelectedGlyphState;
- (void)_resetSelectionView;

@end
