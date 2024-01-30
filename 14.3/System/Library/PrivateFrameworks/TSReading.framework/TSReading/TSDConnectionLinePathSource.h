@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>

@property (nonatomic) int type;
@property (nonatomic) double outsetFrom;
@property (nonatomic) double outsetTo;
@property (readonly) unsigned long long numberOfControlKnobs;

+ (id)pathSourceAtAngleOfSize:(struct CGSize { double x0; double x1; })a0 forType:(int)a1;
+ (id)pathSourceOfLength:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)bend;
- (BOOL)isCircular;
- (id)description;
- (id)bezierPath;
- (BOOL)isRectangular;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isLineSegment;
- (void)setControlKnobPosition:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)getFeedbackStringForKnob:(unsigned long long)a0;
- (struct CGPath { } *)newFeedbackPathForKnob:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })fixedPointForControlKnobChange;
- (id)initWithBezierPath:(id)a0;
- (void)p_setBezierPath:(id)a0;
- (long long)pathElementIndexForKnobTag:(unsigned long long)a0;

@end
