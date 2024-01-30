@interface KnowledgeGraphKit.MAWrapperLearningStreamUtils : NSObject {
    void /* unknown type, empty encoding */ momentClassifier;
    void /* unknown type, empty encoding */ assetClassifier;
}

+ (id)extractFeaturesWithGraph:(id)a0 mappedAssetFeatures:(id)a1 progressBlock:(id /* block */)a2;
+ (id)extractFeaturesForMomentNodes:(id)a0 progressBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (id)classifyMomentsWithInputFeatureVectors:(id)a0;
- (id)classifyAssetsWithInputFeatureVectors:(id)a0;
- (id)initWithClasses:(id)a0 momentFeatureVectors:(id)a1 assetFeatureVectors:(id)a2;

@end
