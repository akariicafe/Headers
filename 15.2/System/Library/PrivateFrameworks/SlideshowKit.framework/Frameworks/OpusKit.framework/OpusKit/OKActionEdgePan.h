@interface OKActionEdgePan : OKActionPan <OKActionEdgePanExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)setupJavascriptContext:(id)a0;
+ (id)edgePanActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 translation:(struct CGPoint { double x0; double x1; })a3 previousTranslation:(struct CGPoint { double x0; double x1; })a4 velocity:(struct CGPoint { double x0; double x1; })a5 previousVelocity:(struct CGPoint { double x0; double x1; })a6 direction:(unsigned long long)a7 context:(id)a8;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
