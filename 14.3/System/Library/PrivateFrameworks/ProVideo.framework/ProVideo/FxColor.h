@interface FxColor : NSObject <NSCoding> {
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCIColor:(id)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)colorWithString:(id)a0;

- (double)red;
- (double)blue;
- (struct CGColorSpace { } *)colorSpace;
- (const double *)components;
- (struct CGColor { } *)_cgColor;
- (id)stringRepresentation;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (double)alpha;
- (id)ciColor;
- (id)initWithCoder:(id)a0;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (double)green;
- (id)description;
- (unsigned long long)numberOfComponents;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (void)convertToRGBA:(double *)a0;

@end
