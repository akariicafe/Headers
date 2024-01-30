@interface FxColor : NSObject <NSCoding> {
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)colorWithCIColor:(id)a0;
+ (id)colorWithString:(id)a0;

- (id)initWithCGColor:(struct CGColor { } *)a0;
- (const double *)components;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (double)green;
- (double)red;
- (id)initWithCoder:(id)a0;
- (id)stringRepresentation;
- (id)ciColor;
- (double)blue;
- (id)initWithString:(id)a0;
- (void)dealloc;
- (id)description;
- (unsigned long long)numberOfComponents;
- (struct CGColorSpace { } *)colorSpace;
- (double)alpha;
- (struct CGColor { } *)_cgColor;
- (void)convertToRGBA:(double *)a0;

@end
