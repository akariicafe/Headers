@class REFeatureSet, NSArray, REFeatureMap, REFeatureMapGenerator, NSMutableOrderedSet, NSLock;

@interface REFeatureTransmuter : NSObject {
    REFeatureSet *_inputSet;
    REFeatureSet *_outputSet;
    NSArray *_orderedFeatures;
    REFeatureMapGenerator *_orderedFeatureMapGenerator;
    REFeatureMap *_scratchValues;
    unsigned long long *_scratchTaggedValues;
    REFeatureMapGenerator *_outputFeatureMapGenerator;
    NSMutableOrderedSet *_featureValuesCache;
    NSLock *_featureValuesCacheLock;
}

@property (readonly, nonatomic) REFeatureSet *inputFeatures;
@property (readonly, nonatomic) REFeatureSet *outputFeatures;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInputFeatures:(id)a0 outputFeatures:(id)a1 outputFeatureMapGenerator:(id)a2;
- (id)_buildGraph;
- (BOOL)_supportedFeature:(id)a0;
- (id)transformFeatureMaps:(id)a0;

@end
