@class NSDictionary, HDProfile, NSMapTable;
@protocol HDDataCollector;

@interface HDDataCollectorMultiplexer : NSObject {
    HDProfile *_profile;
    id<HDDataCollector> _collector;
    NSDictionary *_aggregatorsByType;
    NSMapTable *_recordsByAggregator;
}

- (id)mergedConfiguration;
- (void).cxx_destruct;
- (id)lastDatumForType:(id)a0;
- (id)aggregatorForType:(id)a0;
- (void)registerForCollectionWithState:(id)a0;
- (id)diagnosticDescription;
- (void)setConfiguration:(id)a0 forAggregator:(id)a1;
- (id)initForCollector:(id)a0 identifier:(id)a1 profile:(id)a2 types:(id)a3;
- (void)setLastSensorDatum:(id)a0 forAggregator:(id)a1;
- (id)identifierForAggregator:(id)a0;

@end
