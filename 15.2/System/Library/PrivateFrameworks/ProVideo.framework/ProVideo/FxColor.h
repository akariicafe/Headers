@interface FxColor : NSObject <NSCoding> {
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCIColor:(id)a0;
+ (id)colorWithString:(id)a0;

- (id)initWithString:(id)a0;
- (struct CGColorSpace { } *)colorSpace;
- (id)stringRepresentation;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (const double *)components;
- (void)encodeWithCoder:(id)a0;
- (struct CGColor { } *)_cgColor;
- (id)description;
- (double)alpha;
- (double)red;
- (id)ciColor;
- (id)initWithCoder:(id)a0;
- (double)green;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (unsigned long long)numberOfComponents;
- (double)blue;
- (void)convertToRGBA:(double *)a0;

@end
