@class MPSImageAreaMin;

@interface SIBinaryErosion : NSObject {
    MPSImageAreaMin *_erosionOperator;
}

- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (void).cxx_destruct;
- (id)initWithFactory:(id)a0 kernelRadius:(unsigned long long)a1;

@end
