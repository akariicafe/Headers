@interface TVRUITouchEvent : NSObject

@property (readonly, nonatomic) struct CGPoint { double x; double y; } digitizerLocation;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long touchPhase;
@property (readonly, nonatomic) long long fingerIndex;

- (id)initWithTimestamp:(double)a0 touchPhase:(long long)a1 fingerIndex:(long long)a2 digitizerLocation:(struct CGPoint { double x0; double x1; })a3;

@end
