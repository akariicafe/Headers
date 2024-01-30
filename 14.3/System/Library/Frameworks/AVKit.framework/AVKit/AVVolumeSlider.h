@class AVVolumeWarningView, UIImageView, NSString, NSNumber, AVLayoutItemAttributes;

@interface AVVolumeSlider : UISlider <AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem>

@property (retain, nonatomic) UIImageView *thumbView;
@property (weak, nonatomic) AVVolumeWarningView *volumeWarningView;
@property (nonatomic) BOOL hasChangedLocationAtLeastOnce;
@property (nonatomic) BOOL scrubsWhenTappedAnywhere;
@property (nonatomic, getter=isAnimatingVolumeChange) BOOL animatingVolumeChange;
@property (nonatomic) float effectiveVolumeLimit;
@property (retain, nonatomic) NSNumber *unclampedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } extrinsicContentSize;
@property (nonatomic, getter=isRemoved) BOOL removed;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes;

- (void)cancelTrackingWithEvent:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)layoutAttributesDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_endTracking;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createThumbView;
- (BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldTrackTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateLayoutItem;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;

@end
