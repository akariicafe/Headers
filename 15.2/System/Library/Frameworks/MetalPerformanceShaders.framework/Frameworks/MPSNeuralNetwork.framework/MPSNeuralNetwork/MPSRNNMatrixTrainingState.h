@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState {
    MPSMatrix *singleGateZ;
    BOOL _isTemporary;
}

- (BOOL)isTemporary;
- (void)setReadCount:(unsigned long long)a0;
- (void)dealloc;
- (id)initForSingleGateWithCommandBuffer:(id)a0 matrixDescriptor:(id)a1 isTemporary:(BOOL)a2;

@end
