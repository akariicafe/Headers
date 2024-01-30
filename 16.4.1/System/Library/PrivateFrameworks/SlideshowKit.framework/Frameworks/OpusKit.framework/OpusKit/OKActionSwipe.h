@interface OKActionSwipe : OKAction <OKActionSwipeExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long direction;

+ (void)setupJavascriptContext:(id)a0;
+ (id)swipeActionWithLocation:(struct CGPoint { double x0; double x1; })a0 direction:(unsigned long long)a1 touchCount:(unsigned long long)a2 context:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
