@class NSTimer, NSString, AVMicaPackage, UIViewPropertyAnimator, AVUserInteractionObserverGestureRecognizer, AVLayoutItemAttributes, UIVisualEffectView, NSNumber;

@interface AVButton : UIButton <AVPlaybackControlsViewItem>

@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (nonatomic) double trackingStartTime;
@property (nonatomic) BOOL wasLongPressed;
@property (nonatomic) BOOL wasForcePressTriggered;
@property (nonatomic) double horizontalTranslationOfLongPress;
@property (retain, nonatomic) NSNumber *previousHorizontalPositionOfLongPress;
@property (nonatomic) double force;
@property (nonatomic) double maximumForceSinceTrackingBegan;
@property (weak, nonatomic) NSTimer *longPressTimer;
@property (retain, nonatomic) AVUserInteractionObserverGestureRecognizer *userInteractionGestureRecognizer;
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (nonatomic) BOOL treatsForcePressAsLongPress;
@property (nonatomic) long long tintEffectStyle;
@property (nonatomic) BOOL usesBackgroundEffectViewForTextOnlyButtons;
@property (nonatomic) double forceThreshold;
@property (nonatomic) BOOL multipleTouchesEndsTracking;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *fullScreenImageName;
@property (copy, nonatomic) NSString *inlineImageName;
@property (copy, nonatomic) NSString *fullScreenAlternateImageName;
@property (copy, nonatomic) NSString *inlineAlternateImageName;
@property (retain, nonatomic) AVMicaPackage *micaPackage;
@property (nonatomic) double micaSnapshotAlpha;
@property (nonatomic) BOOL disablesHighlightWhenLongPressed;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } hitRectInsets;
@property (nonatomic) BOOL clampsHitRectInsetsWhenContainedInScrollableView;
@property (nonatomic) struct CGSize { double width; double height; } extrinsicContentSize;
@property (nonatomic, getter=isRemoved) BOOL removed;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithAccessibilityIdentifier:(id)a0;

- (void)cancelTrackingWithEvent:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (void)_updateBackgroundEffectViewIsHidden;
- (id)_preferredImageName;
- (double)_imageViewAlpha;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)layoutAttributesDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)_updateImageIfNeeded;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)_updateLayoutItem;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (struct CGSize { double x0; double x1; })_preferredLayoutSize;
- (void)_handleUserInteractionGestureRecognizer:(id)a0;
- (void)_resetTrackedState;
- (void)_updateTintColorIfNeeded;
- (void)_updateEdgeInsets;

@end
