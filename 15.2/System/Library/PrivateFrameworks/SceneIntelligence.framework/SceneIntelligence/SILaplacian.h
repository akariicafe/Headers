@class MPSImageLaplacian;

@interface SILaplacian : NSObject {
    MPSImageLaplacian *_laplacianOperator;
}

- (void).cxx_destruct;
- (id)init;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;

@end
