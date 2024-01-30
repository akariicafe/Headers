@interface ShotflowNetworkANODBase : ShotflowNetwork

+ (unsigned long long)numberMaxoutLayers;
+ (const void *)ratios;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (const void *)cellStartsX;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (const void *)cellStartsY;
+ (BOOL)poseSquare;
+ (float)nonSquareRollDefault;
+ (float)nonSquareYawDefault;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (void)initializeBuffers;

@end
