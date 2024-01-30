@interface OKActionLongPress : OKAction <OKActionLongPressExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long tapCount;
@property (nonatomic) double pressDuration;

+ (void)setupJavascriptContext:(id)a0;
+ (id)longPressActionWithLocation:(struct CGPoint { double x0; double x1; })a0 tapCount:(unsigned long long)a1 touchCount:(unsigned long long)a2 pressDuration:(double)a3 context:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
