@protocol MTLCommandQueue, MTLDevice;

@interface MLPDeviceHandler : NSObject {
    struct mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> { unsigned int __x_[624]; unsigned long long __i_; } weightSeed;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) unsigned long long dataLayout;

- (void).cxx_destruct;
- (void)importDataFromGPU:(id)a0 cmdBuf:(id)a1;
- (id)initWithDataLayout:(id)a0;
- (id)weightMatrixWithRows:(unsigned long long)a0 columns:(unsigned long long)a1 stdDev:(float)a2 initialValues:(const void *)a3 columnMajor:(BOOL)a4;
- (id)imageFromData:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 featureChannels:(unsigned long long)a3;
- (id)matrixToVector:(id)a0;
- (id)tempMatrixWithRows:(unsigned long long)a0 columns:(unsigned long long)a1 cmdBuf:(id)a2;
- (id)imageFromMatrix:(id)a0 m2iKernel:(id)a1 cmdBuf:(id)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 featureChannels:(unsigned long long)a5;
- (void)sendDataToGPU:(id)a0;
- (id)deduceDevice;
- (float)uniformRandWithParamA:(float)a0 paramB:(float)a1;
- (id)imageBatchFromMatrix:(id)a0 m2iKernel:(id)a1 cmdBuf:(id)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 channels:(unsigned long long)a5;
- (id)tempMatrixFromImages:(id)a0 i2mKernel:(id)a1 cmdBuf:(id)a2;
- (id)matrixWithRows:(unsigned long long)a0 columns:(unsigned long long)a1 cmdBuf:(id)a2;
- (id)weightMatrixFixedRowBytesWithRows:(unsigned long long)a0 columns:(unsigned long long)a1;
- (id)biasVectorWithLength:(unsigned long long)a0 stdDev:(float)a1 values:(const void *)a2;
- (id)matrixFromImages:(id)a0 i2mKernel:(id)a1 cmdBuf:(id)a2;
- (id)vectorWithLength:(unsigned long long)a0 cmdBuf:(id)a1;
- (id).cxx_construct;

@end
