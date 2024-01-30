@class NSString;

@interface OKActionKeyPressed : OKAction <OKActionKeyPressedExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *keyPressed;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL isKeyUp;

+ (id)keyPressedActionWithKey:(id)a0 atTime:(double)a1 isKeyUp:(BOOL)a2 withLocation:(struct CGPoint { double x0; double x1; })a3 context:(id)a4;
+ (void)setupJavascriptContext:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
