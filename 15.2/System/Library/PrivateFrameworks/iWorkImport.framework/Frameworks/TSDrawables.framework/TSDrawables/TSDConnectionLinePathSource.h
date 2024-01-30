@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>

@property (nonatomic) int type;
@property (nonatomic) double outsetFrom;
@property (nonatomic) double outsetTo;

+ (id)pathSourceAtAngleOfSize:(struct CGSize { double x0; double x1; })a0 forType:(int)a1;
+ (id)pathSourceOfLength:(double)a0;

- (void)bend;
- (id)description;
- (id)bezierPath;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchive:(void *)a0;
- (BOOL)isRectangular;
- (BOOL)isLineSegment;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x0; double x1; })fixedPointForControlKnobChange;
- (id)initWithBezierPath:(id)a0;
- (void)p_setBezierPath:(id)a0;
- (long long)pathElementIndexForKnobTag:(unsigned long long)a0;

@end
