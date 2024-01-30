@interface OKActionTap : OKAction <OKActionTapExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long tapCount;

+ (void)setupJavascriptContext:(id)a0;
+ (id)tapActionWithLocation:(struct CGPoint { double x0; double x1; })a0 tapCount:(unsigned long long)a1 touchCount:(unsigned long long)a2 context:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
