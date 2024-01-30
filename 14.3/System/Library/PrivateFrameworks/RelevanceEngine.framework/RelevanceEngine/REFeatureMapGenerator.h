@class NSMutableDictionary;

@interface REFeatureMapGenerator : NSObject {
    NSMutableDictionary *_featureIndexMap;
}

- (void).cxx_destruct;
- (id)initWithFeatureList:(id)a0;
- (id)createFeatureMap;

@end
