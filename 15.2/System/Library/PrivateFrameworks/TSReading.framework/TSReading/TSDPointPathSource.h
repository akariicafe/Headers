@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>

@property int type;
@property struct CGPoint { double x; double y; } point;
@property struct CGSize { double width; double height; } naturalSize;
@property (readonly) unsigned long long numberOfControlKnobs;

+ (id)rightSingleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)doubleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)starWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)pathSourceWithType:(int)a0 point:(struct CGPoint { double x0; double x1; })a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
+ (id)leftSingleArrowWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)plusWithPoint:(struct CGPoint { double x0; double x1; })a0 naturalSize:(struct CGSize { double x0; double x1; })a1;

- (id)description;
- (void)setPointValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isRectangular;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)valueForSetSelector:(SEL)a0;
- (id)initWithType:(int)a0 point:(struct CGPoint { double x0; double x1; })a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForArrow;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForStarPoints;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForStarInnerRadius;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForPlus;
- (void)p_setControlKnobPointForArrow:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForPlus:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPath { } *)p_newArrowPath;
- (struct CGPath { } *)p_newStarPath;
- (struct CGPath { } *)p_newPlusPath;
- (BOOL)p_isRightFacingArrow;
- (void)setControlKnobPosition:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)getFeedbackStringForKnob:(unsigned long long)a0;
- (struct CGPath { } *)newFeedbackPathForKnob:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })minPointValue;
- (struct CGPoint { double x0; double x1; })maxPointValue;
- (struct CGSize { double x0; double x1; })scaleFactorForInscribedRectangle;
- (BOOL)p_isFlippedDoubleArrow;

@end
