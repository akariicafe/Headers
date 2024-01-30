@class MLMultiArray, SNKShotLabel;

@interface SNKShotFeaturizationStreamResult : NSObject

@property (retain) MLMultiArray *data;
@property (retain) SNKShotLabel *label;
@property long long datasetType;

- (void).cxx_destruct;

@end
