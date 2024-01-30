@class NSArray, NSMutableDictionary;

@interface HDStatisticsCollectionCalculatorCachingSourceOrderProvider : HDStatisticsCollectionCalculatorDefaultSourceOrderProvider {
    NSMutableDictionary *_cachedSources;
    NSArray *_cachedOrderedSourceIDs;
}

+ (id)sleepSourceOrderProviderForProfile:(id)a0;

- (id)sourceForSourceID:(long long)a0;
- (id)orderedSourceIDsWithUnorderedIDs:(id)a0;
- (id)initWithProfile:(id)a0 quantityType:(id)a1;
- (void).cxx_destruct;

@end
