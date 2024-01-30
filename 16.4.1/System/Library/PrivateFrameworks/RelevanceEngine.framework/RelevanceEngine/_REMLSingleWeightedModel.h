@class REMLModel;

@interface _REMLSingleWeightedModel : _REMLWeightedModel <_REMLSingleWeightedModelProperties> {
    REMLModel *_model;
}

@property (readonly, nonatomic) REMLModel *model;

- (void).cxx_destruct;
- (void)enumerateModels:(id /* block */)a0;
- (id)initWithFeatureSet:(id)a0 priorMean:(float)a1 biasFeature:(id)a2 modelVarianceEpsilon:(float)a3;
- (BOOL)loadModelFromURL:(id)a0 error:(id *)a1;
- (id)predictWithFeatures:(id)a0;
- (BOOL)saveModelToURL:(id)a0 error:(id *)a1;
- (void)trainModelWithFeatureMap:(id)a0 positiveEvent:(id)a1;

@end
