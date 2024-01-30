@interface TIContinuousPathSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) double force;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) int stage;
@property (readonly, nonatomic) long long pathIndex;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithJsonDictionary:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 timeStamp:(double)a1 force:(double)a2 radius:(double)a3;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 timeStamp:(double)a1 force:(double)a2 radius:(double)a3 stage:(int)a4 pathIndex:(long long)a5;
- (id)toJsonDictionary;

@end
