@class MLModel;

@interface MLModelVisionFeaturePrintInfo : NSObject

@property (retain, nonatomic) id featureExtractorParameters;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) MLModel *postVisionFeaturePrintModel;

- (void).cxx_destruct;

@end
