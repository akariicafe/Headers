@class NSMutableArray, OITSUNoCopyDictionary;

@interface OADGraphicFeatureCache : NSObject {
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)cacheFeature:(id)a0;
- (id)countedFeatureAtIndex:(unsigned long long)a0;
- (id)featuresSortedByUsageCount;

@end
