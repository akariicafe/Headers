@class ABPK2DDetectionConfiguration;

@interface ABPKAlgorithmParams : NSObject

@property struct { void /* unknown type, empty encoding */ columns[3]; } regIntrinsics;
@property struct CGSize { double width; double height; } regImageResolution;
@property (retain) ABPK2DDetectionConfiguration *config2DDetection;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithRegIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 regImageResolution:(struct CGSize { double x0; double x1; })a1;

@end
