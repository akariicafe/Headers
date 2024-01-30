@interface TSDPathCut : NSObject

@property (readonly, nonatomic) long long segment;
@property (readonly, nonatomic) double t;
@property (readonly, nonatomic) double skew;

- (id)description;
- (id)initWithSegment:(long long)a0 atT:(double)a1 withSkew:(double)a2;

@end
