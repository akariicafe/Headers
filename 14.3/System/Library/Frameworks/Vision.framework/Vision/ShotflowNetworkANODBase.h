@interface ShotflowNetworkANODBase : ShotflowNetwork

+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)cellStartsY;
+ (BOOL)poseSquare;
+ (const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)cellStartsX;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (unsigned long long)numberMaxoutLayers;
+ (const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)ratios;
+ (float)nonSquareYawDefault;
+ (float)nonSquareRollDefault;

- (void)initializeBuffers;
- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;

@end
