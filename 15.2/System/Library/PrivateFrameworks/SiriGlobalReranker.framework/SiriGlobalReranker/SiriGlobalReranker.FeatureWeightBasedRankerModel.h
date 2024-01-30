@interface SiriGlobalReranker.FeatureWeightBasedRankerModel : MLModel {
    void /* unknown type, empty encoding */ featureWeights;
}

- (id)initWithDescription:(id)a0;
- (id)initWithDescription:(id)a0 configuration:(id)a1;
- (id)initWithName:(id)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4 configuration:(id)a5;
- (id)initWithConfiguration:(id)a0;
- (id)initDescriptionOnlyWithSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initInterfaceAndMetadataWithCompiledArchive:(void *)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;

@end
