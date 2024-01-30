@class CIColor, NSUUID;

@interface IFColor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGColor { } *cgColor;
@property (readonly) CIColor *ciColor;
@property (readonly) NSUUID *digest;

+ (id)white;
+ (id)black;
+ (struct CGColorSpace { } *)deviceGreyColorSpace;
+ (struct CGColorSpace { } *)deviceRGBColorSpace;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)initWithCIColor:(id)a0;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (struct CGColor { } *)cgColor;

@end
