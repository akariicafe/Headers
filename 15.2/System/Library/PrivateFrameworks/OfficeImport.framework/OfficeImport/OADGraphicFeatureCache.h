@class NSMutableArray, OITSUNoCopyDictionary;

@interface OADGraphicFeatureCache : NSObject {
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)countedFeatureAtIndex:(unsigned long long)a0;
- (unsigned long long)cacheFeature:(id)a0;
- (id)featuresSortedByUsageCount;

@end
