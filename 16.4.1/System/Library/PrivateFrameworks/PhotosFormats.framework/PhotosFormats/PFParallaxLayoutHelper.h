@protocol PFParallaxLayoutConfiguration;

@interface PFParallaxLayoutHelper : NSObject

@property (class, nonatomic) double targetZoomPercent;
@property (class, nonatomic) double targetZoomFactorLimit;
@property (class, nonatomic) double scoreBonusZoomTarget;
@property (class, nonatomic) double scoreBonusZoomHeadroom;
@property (class, nonatomic) double scoreBonusOverlapTarget;
@property (class, nonatomic) double scoreBonusOverlapAvoid;
@property (class, nonatomic) double scoreBonusParallaxOn;
@property (class, nonatomic) double scoreBonusInactive;

@property (readonly, nonatomic) unsigned long long classification;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pixelEffectiveAcceptable;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pixelEffectivePreferred;
@property (readonly, nonatomic) id<PFParallaxLayoutConfiguration> layoutConfiguration;
@property (readonly, nonatomic) BOOL canInflate;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inflatePersonFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;
- (id)bestLayout:(id)a0;
- (double)computeCropScoreForIntermediate:(id)a0;
- (id)initWithParallaxClassification:(unsigned long long)a0 initialRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 effectiveAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 effectivePreferredRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 layoutConfiguration:(id)a5;
- (id)intermediateWithInactiveStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithOverlapStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithParallaxStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithZoomStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (double)scoreAdjustmentWithUnscoredIntermediate:(id)a0 unsafeAreaOverlap:(double)a1 timeBottomOverlap:(double)a2 timeTopOverlap:(double)a3;
- (id)scoreIntermediate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unsafeAreaInImageSpaceWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
