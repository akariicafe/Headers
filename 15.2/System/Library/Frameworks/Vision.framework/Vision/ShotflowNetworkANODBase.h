@interface ShotflowNetworkANODBase : ShotflowNetwork

+ (const void *)ratios;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (unsigned long long)numberMaxoutLayers;
+ (const void *)cellStartsX;
+ (const void *)cellStartsY;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (BOOL)poseSquare;
+ (float)nonSquareRollDefault;
+ (float)nonSquareYawDefault;

- (void)initializeBuffers;
- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;

@end
