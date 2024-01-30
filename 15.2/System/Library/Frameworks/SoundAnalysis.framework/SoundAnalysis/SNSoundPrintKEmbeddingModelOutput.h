@class MLMultiArray, NSSet;

@interface SNSoundPrintKEmbeddingModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *fixedLengthEmbedding;
@property (retain, nonatomic) MLMultiArray *framewiseEmbedding;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFixedLengthEmbedding:(id)a0 framewiseEmbedding:(id)a1;

@end
