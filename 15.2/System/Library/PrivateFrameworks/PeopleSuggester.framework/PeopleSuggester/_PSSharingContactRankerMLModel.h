@class MLModel, NSDictionary;

@interface _PSSharingContactRankerMLModel : NSObject

@property (retain) MLModel *mlModel;
@property double scoreThreshold;
@property (retain, nonatomic) NSDictionary *metadata;

- (void).cxx_destruct;
- (void)loadDefaultModel;
- (id)initWithMLModel:(id)a0 scoreThreshold:(double)a1;
- (id)initWithScoreThreshold:(double)a0;
- (id)scoresOnFeatures:(id)a0;

@end
