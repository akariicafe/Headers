@interface _TVRUITouch : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long phase;
@property (readonly, nonatomic) long long fingerIndex;

- (id)initWithTimestamp:(double)a0 touchPhase:(long long)a1 fingerIndex:(long long)a2;

@end
