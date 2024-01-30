@class MLModel, CRNeuralRecognizerConfiguration;

@interface CRTextSequenceRecognizerModelCoreML : CRTextSequenceRecognizerModel {
    CRNeuralRecognizerConfiguration *_configuration;
}

@property (readonly, nonatomic) MLModel *model;

- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)configuration;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)predictionFromImg_input:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictFromInputs:(id)a0 error:(id *)a1;
- (id)initWithMLConfiguration:(id)a0 error:(id *)a1;
- (BOOL)shouldSaturateInputBatchesForConfiguration:(id)a0;
- (id)inputBatchFromTextFeatures:(id)a0 image:(id)a1 featureWidth:(double)a2 configuration:(id)a3;

@end
