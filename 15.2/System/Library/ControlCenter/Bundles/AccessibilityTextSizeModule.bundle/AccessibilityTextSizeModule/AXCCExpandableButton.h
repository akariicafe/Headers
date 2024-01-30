@class NSTimer, NSString, NSArray, UIView, NSMutableArray, AXCCVisualStylingProvider, UILabel, AXCCExpandableButtonOption;

@interface AXCCExpandableButton : UIControl <AXCCVisualStylingProviderObserver, UIPointerInteractionDelegate>

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
@property (nonatomic) BOOL isControlCenter;
@property (retain, nonatomic) NSArray *options;
@property (readonly, nonatomic) AXCCExpandableButtonOption *selectedOption;
@property (nonatomic) long long selectedOptionIndex;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long axis;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) struct CGSize { double width; double height; } maximumExpandedSize;
@property (nonatomic) struct CGSize { double width; double height; } buttonImageSize;
@property (retain, nonatomic) AXCCVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)collapsedHeightWithImageHeight:(double)a0 maximumHeight:(double)a1;

- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)updateVisualStyling;
- (void)setHighlighted:(BOOL)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)_layoutLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityRespondsToUserInteraction;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)updateContentSizeCategory;
- (void)setContentVerticalAlignment:(long long)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)accessibilityLabel;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)didTapButton:(id)a0;
- (void)showMessage:(id)a0;
- (id)initForControlCenter;
- (void)_springAnimate:(id /* block */)a0;
- (void)_updateButtonsVisiblity;
- (void)_updateSelectionVisiblity;
- (void)_layoutSelectionView;
- (void)_resetSelectionView;
- (long long)_buttonLayoutAxis;
- (void)_animateGlyphStateSelected:(BOOL)a0;

@end
