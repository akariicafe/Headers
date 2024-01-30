@interface MPSRNNRecurrentMatrixState : MPSState {
    id *recurrentMatrices;
    id *cellMatrices;
    int nLayers;
    BOOL _isTemporary;
}

- (BOOL)isTemporary;
- (void)setReadCount:(unsigned long long)a0;
- (void)dealloc;
- (id)getMemoryCellMatrixForLayerIndex:(unsigned long long)a0;
- (id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)a0;
- (id)initWithCommandBuffer:(id)a0 recurrentMatrixDescriptors:(id *)a1 cellMatrixDescriptors:(id *)a2 isTemporary:(BOOL)a3 layerCount:(int)a4;
- (id)initWithDevice:(id)a0 commandBuffer:(id)a1 recurrentMatrixDescriptors:(id *)a2 cellMatrixDescriptors:(id *)a3 isTemporary:(BOOL)a4 layerCount:(int)a5;

@end
