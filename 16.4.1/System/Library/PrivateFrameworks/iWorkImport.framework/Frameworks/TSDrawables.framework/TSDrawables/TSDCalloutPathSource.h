@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing> {
    struct CGSize { double width; double height; } _naturalSize;
}

@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) double maxCornerRadius;
@property (readonly, nonatomic) double minCornerRadius;
@property (readonly, nonatomic) double clampedCornerRadius;
@property (nonatomic) struct CGPoint { double x0; double x1; } tailKnobPosition;
@property (nonatomic) struct CGPoint { double x; double y; } rawTailPosition;
@property (nonatomic) double tailSize;
@property (readonly, nonatomic) double maxTailSize;
@property (nonatomic) struct CGPoint { double x0; double x1; } tailSizeKnobPosition;
@property (readonly, nonatomic) double minTailSize;
@property (readonly, nonatomic) BOOL isTailAtCenter;
@property (readonly, nonatomic) double clampedCalloutTailSize;

+ (id)calloutWithCornerRadius:(double)a0 tailPosition:(struct CGPoint { double x0; double x1; })a1 tailSize:(double)a2 naturalSize:(struct CGSize { double x0; double x1; })a3;
+ (id)quoteBubbleWithTailPosition:(struct CGPoint { double x0; double x1; })a0 tailSize:(double)a1 naturalSize:(struct CGSize { double x0; double x1; })a2;

- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isCircular;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copy;
- (id)init;
- (id)description;
- (id)name;
- (void)saveToArchive:(void *)a0;
- (BOOL)isRectangular;
- (id)bezierPathWithoutFlips;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)initWithCornerRadius:(double)a0 tailPosition:(struct CGPoint { double x0; double x1; })a1 tailSize:(double)a2 naturalSize:(struct CGSize { double x0; double x1; })a3 tailAtCenter:(BOOL)a4;
- (id)interiorWrapPath;
- (BOOL)isOval;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x0; double x1; })p_adjustedCenterForPath:(id)a0;
- (id)p_basePath;
- (id)p_buildPath;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForRoundedRect;
- (void)p_getTailPath:(id)a0 center:(struct CGPoint { double x0; double x1; } *)a1 tailSize:(double *)a2 intersections:(struct CGPoint { double x0; double x1; }[2])a3;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setCornerRadius:(double)a0;
- (void)p_setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_setTailAtCenter:(BOOL)a0;
- (void)p_setTailPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setTailSize:(double)a0;
- (struct CGPoint { double x0; double x1; })p_tailPosition;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)inferredAccessibilityDescription;
- (struct CGPoint { double x0; double x1; })p_tailCenter;

@end
