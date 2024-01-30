@interface ShotflowNetworkANFDv1 : ShotflowNetwork

+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)cellStartsY;
+ (unsigned long long)mumberPosClasses;
+ (const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x0; } x2; } *)importantClasses;
+ (BOOL)poseSquare;
+ (const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)cellStartsX;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (unsigned long long)numberMaxoutLayers;
+ (id)modelName;
+ (const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)ratios;

- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;

@end
