@class NSArray, SGSqlEntityStore;

@interface SGMIFeatureVectorCollator : NSObject {
    unsigned long long _startInDaysAgo;
    unsigned long long _endInDaysAgo;
    unsigned long long _limit;
    BOOL _withBiomeData;
    NSArray *_featureNames;
    SGSqlEntityStore *_store;
    BOOL _useSpotlightDataForMissingBiomeData;
    NSArray *_simulatedCSSIs;
}

- (void).cxx_destruct;
- (void)forEach:(id /* block */)a0;
- (id)initWithMessagesFromDaysAgo:(unsigned long long)a0 throughDaysAgo:(unsigned long long)a1 limit:(unsigned long long)a2 withBiomeData:(BOOL)a3 store:(id)a4 useSpotlightDataForMissingBiomeData:(BOOL)a5 preLoadedFeatureNames:(id)a6;
- (id)initWithMessagesFromDaysAgo:(unsigned long long)a0 throughDaysAgo:(unsigned long long)a1 limit:(unsigned long long)a2 withBiomeData:(BOOL)a3 store:(id)a4 useSpotlightDataForMissingBiomeData:(BOOL)a5 preLoadedFeatureNames:(id)a6 simulatedCSSIs:(id)a7;

@end
