@class MPSImageAreaMax;

@interface SIBinaryDilation : NSObject {
    MPSImageAreaMax *_dilationOperator;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (id)initWithFactory:(id)a0 kernelRadius:(unsigned long long)a1;

@end
