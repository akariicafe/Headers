@class MLModel, CRNeuralRecognizerConfiguration;

@interface CRTextSequenceRecognizerModelCoreML : CRTextSequenceRecognizerModel {
    CRNeuralRecognizerConfiguration *_configuration;
}

@property (readonly, nonatomic) MLModel *model;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)configuration;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithMLConfiguration:(id)a0 error:(id *)a1;
- (id)inputBatchFromTextFeatures:(id)a0 image:(id)a1 featureWidth:(double)a2 configuration:(id)a3;
- (id)predictFromInputs:(id)a0 error:(id *)a1;
- (id)predictionFromImg_input:(id)a0 error:(id *)a1;
- (BOOL)shouldSaturateInputBatchesForConfiguration:(id)a0;

@end
