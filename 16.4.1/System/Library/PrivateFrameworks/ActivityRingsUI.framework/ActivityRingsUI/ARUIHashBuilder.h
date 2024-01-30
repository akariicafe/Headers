@interface ARUIHashBuilder : NSObject {
    unsigned long long _hash;
}

+ (id)builder;

- (void)appendObject:(id)a0;
- (void)appendCGFloat:(double)a0;
- (void)appendDouble:(double)a0;
- (void)appendBool:(BOOL)a0;
- (void)appendCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)hash;
- (id)init;
- (void)appendFloat:(float)a0;
- (void)appendFloat4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (unsigned long long)hashForCGFloat:(double)a0;
- (void)appendFloat2:(SEL)a0;
- (void)appendFloat4:(SEL)a0;
- (void)appendInt:(long long)a0;
- (void)appendTimeInterval:(double)a0;
- (void)appendUnsignedInt:(unsigned long long)a0;
- (unsigned long long)hashForDouble:(double)a0;
- (unsigned long long)hashForFloat:(float)a0;
- (unsigned long long)hashForNSTimeInterval:(double)a0;

@end
