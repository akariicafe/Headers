@class UIColor, UIImageView;
@protocol _MKPinAnnotationViewDelegate;

@interface MKPinAnnotationView : MKAnnotationView {
    UIImageView *_shadowView;
    UIColor *_pinTintColor;
    int _state;
    BOOL _animatesDrop;
}

@property (weak, nonatomic, setter=_setDelegate:) id<_MKPinAnnotationViewDelegate> _delegate;
@property (retain, nonatomic) UIColor *pinTintColor;
@property (nonatomic) BOOL animatesDrop;
@property (nonatomic) unsigned long long pinColor;

+ (id)_imageForLayer:(long long)a0 state:(long long)a1 mapType:(unsigned long long)a2 traits:(id)a3;
+ (id)_imageForState:(long long)a0 mapType:(unsigned long long)a1 pinColor:(id)a2 traits:(id)a3;
+ (id)redPinColor;
+ (struct CGPoint { double x0; double x1; })_calloutOffset;
+ (struct CGPoint { double x0; double x1; })_leftCalloutOffset;
+ (struct CGPoint { double x0; double x1; })_rightCalloutOffset;
+ (id)greenPinColor;
+ (id)purplePinColor;
+ (id)_pinsWithMapType:(unsigned long long)a0 pinColor:(id)a1 traits:(id)a2;
+ (id)_bounceAnimation;
+ (id)_dropBounceAnimation;
+ (struct CGSize { double x0; double x1; })_perceivedSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pinFrameForPosition:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })_perceivedAnchorPoint;
+ (struct CGPoint { double x0; double x1; })_shadowAnchorPoint;
+ (id)_imageCache;
+ (id)_shadowImage;
+ (id)_reuseIdentifier;
+ (Class)layerClass;
+ (Class)_mapkitLeafClass;

- (void)_setMapType:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)animationDidStart:(id)a0;
- (id)_image;
- (void)_invalidateImage;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)_pins;
- (int)_state;
- (void)_stopDrop;
- (void)setHighlighted:(BOOL)a0;
- (void)_didUpdatePosition;
- (void)_setRotationRadians:(double)a0 withAnimation:(id)a1;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (id)_floatingImage;
- (id)_bounceAnimation:(BOOL)a0 withDelay:(double)a1 addToLayer:(BOOL)a2;
- (void)_liftForDraggingAnimated:(BOOL)a0;
- (void)_liftForDraggingAfterBounceAnimated:(BOOL)a0;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)a0 animated:(BOOL)a1;
- (void)_liftDidEnd:(id)a0;
- (void)_cleanupAfterPinDropAnimation;
- (struct CGPoint { double x0; double x1; })_draggingDropOffset;
- (void)_dropFromDistance:(double)a0 maxDistance:(double)a1 withDelay:(double)a2;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (id)description;
- (void)_removeAllAnimations;
- (id)_highlightedImage;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)isHighlighted;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_significantBounds;
- (void)_updateShadowLayer;
- (void)_updateAnchorPosition:(struct CGPoint { double x0; double x1; })a0 alignToPixels:(BOOL)a1;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;

@end
