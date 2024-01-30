@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (id)layerEnumerator;
- (void)enumerateLayersUsingBlock:(id /* block */)a0;
- (BOOL)isOpen;
- (id)layerNames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithImageRef:(id)a0 layerIndex:(unsigned int)a1;
- (id)layerRefAtIndex:(unsigned int)a0;
- (BOOL)isLayerGroup;
- (void)dealloc;
- (BOOL)_isGroupType:(unsigned int)a0;
- (BOOL)isGroupStart;
- (BOOL)isGroupEnd;
- (unsigned int)numberOfLayers;

@end
