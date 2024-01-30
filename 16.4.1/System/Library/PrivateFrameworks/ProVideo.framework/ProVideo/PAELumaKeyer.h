@class NSDictionary;

@interface PAELumaKeyer : PAEKeyer {
    NSDictionary *properties;
}

- (void)dealloc;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (void)createLutForNode:(void *)a0 input:(int)a1 rect:(const struct HGRect { int x0; int x1; int x2; int x3; } *)a2 omKeyer:(void *)a3;
- (BOOL)finishInitialSetup:(id *)a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })getKeyerNode:(struct HGRef<HGNode> { struct HGNode *x0; })a0 omKeyer:(void *)a1 atTime:(union { double x0; struct *x1; })a2;
- (id)initWithAPIManager:(id)a0;
- (BOOL)isLumaKey;
- (BOOL)oscIsPublishable;

@end
