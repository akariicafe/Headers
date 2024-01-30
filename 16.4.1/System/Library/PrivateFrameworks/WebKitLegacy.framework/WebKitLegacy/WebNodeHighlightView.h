@class WebNodeHighlight, NSMutableArray;

@interface WebNodeHighlightView : WAKView {
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}

- (BOOL)isFlipped;
- (void)dealloc;
- (void)_removeAllLayers;
- (void)_attach:(id)a0 numLayers:(unsigned long long)a1;
- (void)_layoutForNodeHighlight:(void *)a0 parent:(id)a1;
- (void)_layoutForRectsHighlight:(void *)a0 parent:(id)a1;
- (void)detachFromWebNodeHighlight;
- (id)initWithWebNodeHighlight:(id)a0;
- (void)layoutSublayers:(id)a0;
- (id)webNodeHighlight;

@end
