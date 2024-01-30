@interface _GCUserIntentInputEvent : NSObject

@property (readonly, nonatomic) long long octant;
@property (readonly, nonatomic) double timestampInSeconds;

- (id)initWithXValue:(float)a0 yValue:(float)a1 timestamp:(unsigned long long)a2 deadzoneSquared:(double)a3;

@end
