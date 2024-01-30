@interface AKTSDPathIntersection : NSObject

@property (readonly, nonatomic) long long segment;
@property (readonly, nonatomic) long long segmentB;
@property (readonly, nonatomic) double t;
@property (readonly, nonatomic) double tB;
@property (nonatomic) struct CGPoint { double x; double y; } point;

- (id)description;
- (long long)compareSegmentAndT:(id)a0;
- (long long)compareT:(id)a0;
- (id)initWithSegment:(long long)a0 atT:(double)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithSegment:(long long)a0 atT:(double)a1 onSegmentB:(long long)a2 atT:(double)a3 atPoint:(struct CGPoint { double x0; double x1; })a4;

@end
