@interface FMKeyFrame : NSObject

@property (nonatomic) long long sampleTime;
@property (nonatomic) float value;

- (id)description;
- (id)initWithValue:(float)a0 atTime:(long long)a1;

@end
