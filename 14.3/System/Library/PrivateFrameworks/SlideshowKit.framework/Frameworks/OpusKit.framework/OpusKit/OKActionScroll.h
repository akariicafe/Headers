@interface OKActionScroll : OKAction <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)setupJavascriptContext:(id)a0;
+ (id)scrollWith:(struct CGPoint { double x0; double x1; })a0;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
