@interface ShotflowDetectorANODv3 : ShotflowDetectorANODBase

+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;
+ (id)filterThresholds;

- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)getIndexBoxes:(id)a0 filterThresholdIndex:(unsigned long long)a1;
- (id)nmsBoxes:(id)a0;
- (id)initWithNetwork:(id)a0;
- (id)initWithNetwork:(id)a0 filterThreshold:(id)a1;

@end
