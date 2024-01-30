@interface _UIElasticValue : NSObject

@property (nonatomic) double currentValue;
@property (nonatomic) double targetValue;
@property (nonatomic) double speed;
@property (readonly, nonatomic, getter=isSteady) BOOL steady;
@property (nonatomic) double friction;
@property (nonatomic) double momentum;

- (id)description;
- (id)init;
- (void)update:(double)a0;
- (id)initWithValue:(double)a0;
- (void)updateFromDisplayLink:(id)a0;

@end
