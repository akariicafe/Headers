@class CIColor;

@interface ISColor : NSObject

@property (readonly) struct CGColor { } *cgColor;
@property (readonly) CIColor *ciColor;

+ (struct CGColorSpace { } *)deviceGreyColorSpace;
+ (id)black;
+ (struct CGColorSpace { } *)deviceRGBColorSpace;

- (void)dealloc;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;

@end
