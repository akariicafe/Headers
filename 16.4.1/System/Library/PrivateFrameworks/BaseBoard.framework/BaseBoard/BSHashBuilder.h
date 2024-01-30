@interface BSHashBuilder : NSObject {
    unsigned long long _hash;
}

+ (id)builder;

- (id)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)appendObject:(id)a0;
- (id)appendSize:(struct CGSize { double x0; double x1; })a0;
- (id)appendCGFloat:(double)a0;
- (id)appendString:(id)a0;
- (id)appendDouble:(double)a0;
- (id)appendCGSize:(struct CGSize { double x0; double x1; })a0;
- (id)appendArray:(id)a0;
- (id)appendClass:(Class)a0;
- (id)appendRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)appendBool:(BOOL)a0;
- (id)appendCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)appendInteger:(long long)a0;
- (id)appendPointer:(void *)a0;
- (unsigned long long)hash;
- (id)appendHashingBlocks:(id /* block */)a0;
- (id)appendPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)appendUnsignedInteger:(unsigned long long)a0;
- (id)appendFloat:(float)a0;
- (id)appendSizeT:(unsigned long long)a0;
- (id)appendCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)appendInt64:(long long)a0;

@end
