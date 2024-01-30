@interface ShotflowDetectorANODv4 : ShotflowDetectorANODBase

+ (id)supportedLabelKeys;
+ (Class)shotflowNetworkClass;
+ (id)filterThresholds;

- (id)initWithNetwork:(id)a0 filterThresholds:(id)a1;
- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)getIndexBoxes:(id)a0 filterThresholdIndex:(unsigned long long)a1;
- (id)initWithNetwork:(id)a0;
- (id)nmsBoxes:(id)a0;

@end
