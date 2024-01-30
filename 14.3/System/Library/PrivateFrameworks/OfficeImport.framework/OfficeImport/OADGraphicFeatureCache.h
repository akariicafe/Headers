@class NSMutableArray, OITSUNoCopyDictionary;

@interface OADGraphicFeatureCache : NSObject {
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)countedFeatureAtIndex:(unsigned long long)a0;
- (unsigned long long)cacheFeature:(id)a0;
- (id)featuresSortedByUsageCount;

@end
