@class NSMutableDictionary;

@interface REFeatureMapGenerator : NSObject {
    NSMutableDictionary *_featureIndexMap;
}

- (void).cxx_destruct;
- (id)createFeatureMap;
- (id)initWithFeatureList:(id)a0;

@end
