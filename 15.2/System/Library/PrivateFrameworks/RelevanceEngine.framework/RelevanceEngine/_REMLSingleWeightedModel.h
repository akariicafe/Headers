@class REMLModel;

@interface _REMLSingleWeightedModel : _REMLWeightedModel <_REMLSingleWeightedModelProperties> {
    REMLModel *_model;
}

@property (readonly, nonatomic) REMLModel *model;

- (id)initWithFeatureSet:(id)a0 priorMean:(float)a1 biasFeature:(id)a2 modelVarianceEpsilon:(float)a3;
- (void)enumerateModels:(id /* block */)a0;
- (id)predictWithFeatures:(id)a0;
- (BOOL)loadModelFromURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)trainModelWithFeatureMap:(id)a0 positiveEvent:(id)a1;
- (BOOL)saveModelToURL:(id)a0 error:(id *)a1;

@end
