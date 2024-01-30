@class CKTextComponentLayerHighlighter, CKTextKitRenderer;

@interface CKTextComponentLayer : CKAsyncLayer {
    CKTextComponentLayerHighlighter *_highlighter;
}

@property (retain, nonatomic) CKTextKitRenderer *renderer;
@property (readonly, nonatomic) CKTextComponentLayerHighlighter *highlighter;

+ (id)defaultValueForKey:(id)a0;
+ (void)drawInContext:(struct CGContext { } *)a0 parameters:(id)a1;

- (void)setNeedsDisplayOnBoundsChange:(BOOL)a0;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)drawParameters;
- (id)willDisplayAsynchronouslyWithDrawParameters:(id)a0;
- (void)didDisplayAsynchronously:(id)a0 withDrawParameters:(id)a1;

@end
