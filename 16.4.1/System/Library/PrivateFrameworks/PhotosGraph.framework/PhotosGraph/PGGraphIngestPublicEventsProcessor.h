@class NSDictionary, NSString, PGGraphBuilder;

@interface PGGraphIngestPublicEventsProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly, nonatomic) NSDictionary *publicEventCriteriaByCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_frequentLocationNodesForMomentNode:(id)a0 largeFrequentLocationNodes:(id)a1;
- (void)_enumeratePublicEventsFromMomentNodes:(id)a0 progressBlock:(id /* block */)a1 usingBlock:(id /* block */)a2;
- (void)_collectConsolidatedAddressesForMomentNodes:(id)a0 largeFrequentLocationNodes:(id)a1 consolidatedAddresses:(id *)a2 consolidatedAddressesByMomentIdentifier:(id *)a3 momentNodesForConsolidatedAddresses:(id *)a4;
- (void)_insertPublicEventsFromMomentNodes:(id)a0 graphUpdate:(id)a1 progressBlock:(id /* block */)a2;
- (id)disambiguateEvents:(id)a0 forTimeLocationTuple:(id)a1 momentNode:(id)a2 graph:(id)a3 meaningfulEventProcessorCache:(id)a4;
- (id)publicEventCriteriaByCategoryInGraph:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
