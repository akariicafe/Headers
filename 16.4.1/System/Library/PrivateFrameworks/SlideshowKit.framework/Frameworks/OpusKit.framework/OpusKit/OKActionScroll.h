@interface OKActionScroll : OKAction <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)scrollWith:(struct CGPoint { double x0; double x1; })a0;
+ (void)setupJavascriptContext:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
