@class PHPhotoLibrary, PGGraph, CLSSceneTaxonomyHierarchy;

@interface PGPhotosChallengeMeaningAlgorithmWrapper : NSObject {
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PGGraph *graph;

- (void).cxx_destruct;
- (id)debugInformationForMeaningIdentifier:(id)a0 assetUUID:(id)a1;
- (id)initWithEvaluationContext:(id)a0;
- (unsigned short)predictQuestionStateForMeaningIdentifier:(id)a0 assetUUID:(id)a1 params:(id)a2;

@end
