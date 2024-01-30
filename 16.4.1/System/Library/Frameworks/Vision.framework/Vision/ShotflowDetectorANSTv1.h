@interface ShotflowDetectorANSTv1 : ShotflowDetectorANODBase

+ (id)filterThresholds;
+ (Class)shotflowNetworkClass;
+ (id)supportedLabelKeys;

- (id)initWithNetwork:(id)a0;
- (id)getIndexBoxes:(id)a0 filterThresholdIndex:(unsigned long long)a1;
- (id)nmsBoxes:(id)a0;
- (id)processBoxes:(id)a0 withHeight:(float)a1 andWidth:(float)a2;
- (id)initWithNetwork:(id)a0 filterThresholds:(id)a1;
- (id)modifySmallFaceThrehold:(id)a0 withHeight:(float)a1 andWidth:(float)a2;

@end
