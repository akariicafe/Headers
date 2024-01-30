@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState {
    MPSMatrix *singleGateZ;
    BOOL _isTemporary;
}

- (BOOL)isTemporary;
- (id)initForSingleGateWithCommandBuffer:(id)a0 matrixDescriptor:(id)a1 isTemporary:(BOOL)a2;
- (void)dealloc;
- (void)setReadCount:(unsigned long long)a0;

@end
