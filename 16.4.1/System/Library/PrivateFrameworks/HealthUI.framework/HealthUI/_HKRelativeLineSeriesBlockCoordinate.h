@interface _HKRelativeLineSeriesBlockCoordinate : _HKLineSeriesBlockCoordinate

@property (readonly, nonatomic) struct CGPoint { double x; double y; } start;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } end;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } midpoint;

- (id)description;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (double)endXValue;
- (double)startXValue;
- (id)initWithStart:(struct CGPoint { double x0; double x1; })a0 end:(struct CGPoint { double x0; double x1; })a1 userInfo:(id)a2;

@end
