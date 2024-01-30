@class MPSImageLaplacian;

@interface SILaplacian : NSObject {
    MPSImageLaplacian *_laplacianOperator;
}

- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
