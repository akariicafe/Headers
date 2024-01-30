@class NSMutableDictionary;

@interface REFeatureMapGenerator : NSObject {
    NSMutableDictionary *_featureIndexMap;
}

- (id)initWithFeatureList:(id)a0;
- (void).cxx_destruct;
- (id)createFeatureMap;

@end
