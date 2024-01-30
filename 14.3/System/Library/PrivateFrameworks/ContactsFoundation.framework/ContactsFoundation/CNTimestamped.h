@interface CNTimestamped : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) double timestamp;

+ (id /* block */)wrapTransformWithScheduler:(id)a0;
+ (id)timestampedWithValue:(id)a0 timestamp:(double)a1;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 timestamp:(double)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
