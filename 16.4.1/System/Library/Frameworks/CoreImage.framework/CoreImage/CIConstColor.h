@interface CIConstColor : CIColor

+ (id)alloc;

- (const double *)components;
- (id)retain;
- (double)green;
- (oneway void)release;
- (double)red;
- (struct CGColor { } *)cgColor;
- (double)blue;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)autorelease;
- (unsigned long long)numberOfComponents;
- (struct CGColor { } *)rgbColor;
- (struct CGColorSpace { } *)colorSpace;
- (double)alpha;
- (unsigned long long)retainCount;

@end
