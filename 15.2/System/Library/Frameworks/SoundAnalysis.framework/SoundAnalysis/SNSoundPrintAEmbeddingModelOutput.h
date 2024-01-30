@class MLMultiArray, NSSet;

@interface SNSoundPrintAEmbeddingModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *_637;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWith_637:(id)a0;

@end
