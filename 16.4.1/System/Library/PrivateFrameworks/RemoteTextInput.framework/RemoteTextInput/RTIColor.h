@interface RTIColor : NSObject <NSCopying, NSSecureCoding> {
    unsigned char _type : 8;
    double _values[4];
    struct CGColor { } *_cgColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGColor { } *)cgColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
