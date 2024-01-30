@class NSArray;

@interface TSCH3DChartVertexShadowsRenderProcessor : TSCH3DRetargetRenderProcessor {
    NSArray *mShadowsEffects;
}

- (id)init;
- (void)submit:(id)a0;
- (void)dealloc;
- (long long)attribute:(id)a0 resource:(id)a1 specs:(const struct AttributeSpecs { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a2;
- (long long)texture:(id)a0 resource:(id)a1 attributes:(const struct TextureAttributes { int x0; int x1; BOOL x2; BOOL x3; BOOL x4; struct TextureSizeHint { int x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } x5; BOOL x6; } *)a2;
- (id)p_effects;

@end
