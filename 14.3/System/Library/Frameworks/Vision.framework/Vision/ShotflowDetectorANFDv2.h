@interface ShotflowDetectorANFDv2 : ShotflowDetectorANODBase

+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;
+ (id)filterThresholds;

- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)nmsBoxes:(id)a0;
- (id)initWithNetwork:(id)a0;
- (id)initWithNetwork:(id)a0 filterThreshold:(id)a1;

@end
