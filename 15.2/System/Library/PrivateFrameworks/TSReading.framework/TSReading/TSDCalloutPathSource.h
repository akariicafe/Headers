@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing> {
    double mCornerRadius;
    double mTailSize;
    struct CGPoint { double x; double y; } mTailPosition;
    struct CGSize { double width; double height; } mNaturalSize;
    BOOL mIsTailAtCenter;
}

@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) double maxCornerRadius;
@property (nonatomic) struct CGPoint { double x0; double x1; } tailKnobPosition;
@property (nonatomic) double tailSize;
@property (readonly, nonatomic) double maxTailSize;
@property (nonatomic) struct CGPoint { double x0; double x1; } tailSizeKnobPosition;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } tailCenter;
@property (readonly, nonatomic) BOOL isTailAtCenter;
@property (readonly) unsigned long long numberOfControlKnobs;

+ (id)quoteBubbleWithTailPosition:(struct CGPoint { double x0; double x1; })a0 tailSize:(double)a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
+ (id)calloutWithCornerRadius:(double)a0 tailPosition:(struct CGPoint { double x0; double x1; })a1 tailSize:(double)a2 naturalSize:(struct CGSize { double x0; double x1; })a3;

- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isOval;
- (BOOL)isRectangular;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (id)interiorWrapPath;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)valueForSetSelector:(SEL)a0;
- (void)setControlKnobPosition:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)getFeedbackStringForKnob:(unsigned long long)a0;
- (struct CGPath { } *)newFeedbackPathForKnob:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForRoundedRect;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_setCornerRadius:(double)a0;
- (void)p_setTailPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setTailSize:(double)a0;
- (void)p_setTailAtCenter:(BOOL)a0;
- (id)initWithCornerRadius:(double)a0 tailPosition:(struct CGPoint { double x0; double x1; })a1 tailSize:(double)a2 naturalSize:(struct CGSize { double x0; double x1; })a3 tailAtCenter:(BOOL)a4;
- (struct CGPoint { double x0; double x1; })p_tailPosition;
- (id)p_basePath;
- (void)p_getTailPath:(id)a0 center:(struct CGPoint { double x0; double x1; } *)a1 tailSize:(double *)a2 intersections:(struct CGPoint { double x0; double x1; }[2])a3;
- (struct CGPoint { double x0; double x1; })p_adjustedCenterForPath:(id)a0;
- (id)p_buildPath;

@end
