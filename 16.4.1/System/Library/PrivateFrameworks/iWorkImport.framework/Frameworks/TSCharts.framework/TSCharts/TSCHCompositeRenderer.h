@class NSArray, NSString, TSCHRenderer;

@interface TSCHCompositeRenderer : TSCHRenderer <TSCHCompositeRendering> {
    TSCHRenderer *_eventHandler;
}

@property (readonly, nonatomic) NSArray *renderers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_delegateSelector:(SEL)a0 toRenderer:(id)a1 transparencyLayer:(int)a2 inContext:(struct CGContext { } *)a3;
+ (void)renderTSCHCompositeRendering:(id)a0 intoContext:(struct CGContext { } *)a1 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void).cxx_destruct;
- (void)didBeginTransparencyLayer:(int)a0 inContext:(struct CGContext { } *)a1;
- (void)didEndTransparencyLayer:(int)a0 inContext:(struct CGContext { } *)a1;
- (void)drawIntoLayer:(int)a0 inContext:(struct CGContext { } *)a1 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithChartRep:(id)a0 withSubRenderers:(id)a1;
- (BOOL)needsAnySeparateLayers;
- (void)p_delegateSelectorToRenderers:(SEL)a0 transparencyLayer:(int)a1 inContext:(struct CGContext { } *)a2;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)transparencyLayers;
- (void)willBeginTransparencyLayer:(int)a0 inContext:(struct CGContext { } *)a1;
- (void)willEndTransparencyLayer:(int)a0 inContext:(struct CGContext { } *)a1;

@end
