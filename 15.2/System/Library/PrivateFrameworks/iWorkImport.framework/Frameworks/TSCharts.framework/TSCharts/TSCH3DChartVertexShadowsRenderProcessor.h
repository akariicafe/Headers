@class NSArray;

@interface TSCH3DChartVertexShadowsRenderProcessor : TSCH3DRetargetRenderProcessor {
    NSArray *_shadowsEffects;
}

- (void)submit:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)attribute:(id)a0 resource:(id)a1 specs:(const struct AttributeSpecs { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a2;
- (long long)texture:(id)a0 resource:(id)a1 attributes:(const void *)a2;
- (id)p_effects;

@end
