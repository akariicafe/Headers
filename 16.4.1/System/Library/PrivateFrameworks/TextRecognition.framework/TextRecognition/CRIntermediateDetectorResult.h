@class NSMutableArray;

@interface CRIntermediateDetectorResult : NSObject

@property (retain, nonatomic) NSMutableArray *pyramidPreIntraScaleNMSTextFeatures;
@property (retain, nonatomic) NSMutableArray *pyramidPostIntraScaleNMSTextFeatures;
@property (retain, nonatomic) NSMutableArray *pyramidPostInterScaleNMSTextFeatures;
@property (retain, nonatomic) NSMutableArray *pyramidScaleSize;

- (void).cxx_destruct;
- (id)initWithNumberOfScales:(long long)a0;

@end
