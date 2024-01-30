@interface ShotflowNetworkANFDv1 : ShotflowNetwork

+ (id)modelName;
+ (const void *)ratios;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (const void *)importantClasses;
+ (unsigned long long)mumberPosClasses;
+ (unsigned long long)numberMaxoutLayers;
+ (const void *)cellStartsX;
+ (const void *)cellStartsY;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (BOOL)poseSquare;

- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)initializeBuffers;
- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;

@end
