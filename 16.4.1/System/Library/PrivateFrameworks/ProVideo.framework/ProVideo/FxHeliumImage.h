@interface FxHeliumImage : FxImage {
    void *_heliumImagePriv;
}

- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0;
- (void)dealloc;
- (unsigned long long)imageType;
- (void *)heliumNode;
- (struct HGRef<HGNode> { struct HGNode *x0; })heliumRef;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0 andHeliumNode:(void *)a1;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0 andHeliumRef:(const void *)a1;
- (void)setHeliumNode:(void *)a0;
- (void)setHeliumRef:(const void *)a0;

@end
