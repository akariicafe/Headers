@class UIFont, NSString, NSTimer, AVMicaPackage, UIViewPropertyAnimator, AVUserInteractionObserverGestureRecognizer, AVLayoutItemAttributes, UIVisualEffectView, NSNumber;

@interface AVButton : UIButton <AVPlaybackControlsViewItem> {
    NSString *_accessibilityLabelOverride;
    BOOL _disablesHighlightAnimation;
}

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
@property (retain, nonatomic) UIFont *activeFont;
@property (nonatomic, getter=isSecondGeneration) BOOL secondGeneration;
@property (nonatomic) BOOL treatsForcePressAsLongPress;
@property (nonatomic) long long tintEffectStyle;
@property (nonatomic) BOOL usesBackgroundEffectViewForTextOnlyButtons;
@property (nonatomic) double forceThreshold;
@property (nonatomic) BOOL multipleTouchesEndsTracking;
@property (copy, nonatomic) NSString *activeImageName;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *alternateImageName;
@property (nonatomic) double alternateImagePadding;
@property (nonatomic) double fullscreenAlternateImagePadding;
@property (nonatomic) BOOL appliesTransformToImageViewWhenHighlighted;
@property (retain, nonatomic) UIFont *inlineFont;
@property (retain, nonatomic) UIFont *fullScreenFont;
@property (retain, nonatomic) UIFont *alternateFullScreenFont;
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

+ (id)buttonWithAccessibilityIdentifier:(id)a0 isSecondGeneration:(BOOL)a1;
+ (id)customHighlightedAnimationButtonWithAccessibilityIdentifier:(id)a0;
+ (id)buttonWithAccessibilityIdentifier:(id)a0 accessibilityLabel:(id)a1 isSecondGeneration:(BOOL)a2;

- (id)accessibilityLabel;
- (void)layoutAttributesDidChange;
- (double)_imageViewAlpha;
- (void)_updateBackgroundEffectViewIsHidden;
- (void)_updateImageIfNeeded;
- (void)_updateEdgeInsets;
- (void)willMoveToWindow:(id)a0;
- (void)_updateTintColorIfNeeded;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)_preferredFont;
- (void)_updateLayoutItem;
- (struct CGSize { double x0; double x1; })_preferredLayoutSize;
- (void)_resetTrackedState;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_handleUserInteractionGestureRecognizer:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)_preferredImageName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (void)setEnabled:(BOOL)a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;

@end
