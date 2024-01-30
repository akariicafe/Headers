@interface TVRCTouchEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long finger;
@property (readonly, nonatomic) long long phase;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } digitizerLocation;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithTimestamp:(double)a0 finger:(long long)a1 phase:(long long)a2 digitizerLocation:(struct CGPoint { double x0; double x1; })a3;

@end
