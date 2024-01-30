@interface ShotflowNetworkANFDv1 : ShotflowNetwork

+ (unsigned long long)numberMaxoutLayers;
+ (id)modelName;
+ (const void *)ratios;
+ (unsigned long long)mumberPosClasses;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (const void *)cellStartsX;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (const void *)cellStartsY;
+ (const void *)importantClasses;
+ (BOOL)poseSquare;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;

@end
