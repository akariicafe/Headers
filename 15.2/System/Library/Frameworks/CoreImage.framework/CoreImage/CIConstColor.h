@interface CIConstColor : CIColor

+ (id)alloc;

- (struct CGColorSpace { } *)colorSpace;
- (const double *)components;
- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (double)alpha;
- (struct CGColor { } *)rgbColor;
- (double)red;
- (BOOL)isEqual:(id)a0;
- (double)green;
- (unsigned long long)hash;
- (void)dealloc;
- (unsigned long long)numberOfComponents;
- (struct CGColor { } *)cgColor;
- (oneway void)release;
- (double)blue;

@end
