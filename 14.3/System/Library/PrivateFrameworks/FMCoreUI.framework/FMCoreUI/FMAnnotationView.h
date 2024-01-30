@class CALayer, CAShapeLayer;
@protocol FMAnnotation, MKAnnotation;

@interface FMAnnotationView : MKAnnotationView

@property (retain, nonatomic) CAShapeLayer *smallRingLayer;
@property (retain, nonatomic) CAShapeLayer *largeRingLayer;
@property (retain, nonatomic) CALayer *smallCircleLayer;
@property (retain, nonatomic) CALayer *largeCircleLayer;
@property (retain, nonatomic) CALayer *locationOuterLayer;
@property (retain, nonatomic) CALayer *locationInnerLayer;
@property (retain, nonatomic) CALayer *smallPersonImageLayer;
@property (retain, nonatomic) CALayer *largePersonImageLayer;
@property (nonatomic) BOOL isShowingLargeSelectedAnnotation;
@property (nonatomic) BOOL hasPhotoImage;
@property (retain, nonatomic) id<FMAnnotation, MKAnnotation> annotation;
@property (nonatomic) BOOL shouldPreventLargeAnnotationState;
@property (nonatomic) BOOL isDelayed;

+ (BOOL)_followsTerrain;
+ (void)setImagePadding:(double)a0;
+ (void)setLargeAnnotationBorderVisible:(BOOL)a0;
+ (void)setThickAnnotationBorder:(BOOL)a0;
+ (void)preloadAssets;
+ (void)setShouldMaskLayer:(BOOL)a0;

- (void)setTintColor:(id)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setAnnotation:(id)a0;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1 tintColor:(id)a2;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 delay:(double)a2;
- (void)updateStyleForAnnotation:(id)a0;
- (void)invertColorStatusDidChange:(id)a0;
- (void)_setupSpringActions;
- (void)_updateAnnotationStyle;
- (void)animateDelayedAnimation;
- (void)_selectionWasUpdated:(BOOL)a0;
- (void)_transitionToNewSize:(BOOL)a0;
- (void)addColorInvertFilterToLayer:(id)a0;
- (void)removeColorInvertFilterToLayer:(id)a0;

@end
