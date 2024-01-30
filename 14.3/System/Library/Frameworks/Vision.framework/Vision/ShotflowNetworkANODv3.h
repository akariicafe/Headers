@interface ShotflowNetworkANODv3 : ShotflowNetworkANODBase

+ (float)inputScale;
+ (id)inputLayerName;
+ (BOOL)hasPose;
+ (unsigned long long)mumberPosClasses;
+ (const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x0; } x2; } *)importantClasses;
+ (BOOL)inputBGR;
+ (id)modelName;
+ (struct tuple<float, float, float> { struct __tuple_impl<std::__1::__tuple_indices<0, 1, 2>, float, float, float> { float x0; float x1; float x2; } x0; })inputBiasRGB;

- (id)processVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;

@end
