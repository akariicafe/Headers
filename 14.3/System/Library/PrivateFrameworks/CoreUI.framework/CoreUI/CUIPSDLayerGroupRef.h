@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (unsigned int)numberOfLayers;
- (BOOL)isOpen;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithImageRef:(id)a0 layerIndex:(unsigned int)a1;
- (id)layerRefAtIndex:(unsigned int)a0;
- (BOOL)isLayerGroup;
- (BOOL)_isGroupType:(unsigned int)a0;
- (BOOL)isGroupStart;
- (BOOL)isGroupEnd;
- (id)layerNames;
- (id)layerEnumerator;
- (void)enumerateLayersUsingBlock:(id /* block */)a0;

@end
