@interface OKActionPinch : OKAction <OKActionPinchExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double scale;
@property (nonatomic) double angle;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) double velocity;

+ (id)pinchActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 scale:(double)a3 angle:(double)a4 translation:(struct CGPoint { double x0; double x1; })a5 velocity:(double)a6 context:(id)a7;
+ (void)setupJavascriptContext:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;

@end
