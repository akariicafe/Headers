@interface OKActionDynamicPan : OKActionPan <OKActionDynamicPanExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)setupJavascriptContext:(id)a0;
+ (id)dynamicPanActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 translation:(struct CGPoint { double x0; double x1; })a3 velocity:(struct CGPoint { double x0; double x1; })a4 direction:(unsigned long long)a5 context:(id)a6;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
