@interface MPSRNNRecurrentImageState : MPSState {
    id *recurrentImages;
    id *cellImages;
    int nLayers;
    BOOL _isTemporary;
}

- (BOOL)isTemporary;
- (void)setReadCount:(unsigned long long)a0;
- (void)dealloc;
- (id)getMemoryCellImageForLayerIndex:(unsigned long long)a0;
- (id)getRecurrentOutputImageForLayerIndex:(unsigned long long)a0;
- (id)initWithCommandBuffer:(id)a0 recurrentImageDescriptors:(id *)a1 cellImageDescriptors:(id *)a2 isTemporary:(BOOL)a3 layerCount:(int)a4;

@end
