@class WebNodeHighlight, NSMutableArray;

@interface WebNodeHighlightView : WAKView {
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}

- (BOOL)isFlipped;
- (void)_removeAllLayers;
- (void)dealloc;
- (void)layoutSublayers:(id)a0;
- (id)initWithWebNodeHighlight:(id)a0;
- (void)detachFromWebNodeHighlight;
- (void)_attach:(id)a0 numLayers:(unsigned long long)a1;
- (void)_layoutForNodeHighlight:(void *)a0 parent:(id)a1;
- (void)_layoutForRectsHighlight:(void *)a0 parent:(id)a1;
- (id)webNodeHighlight;

@end
