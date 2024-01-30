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
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)_insertPublicEventsFromMomentNodes:(id)a0 graphUpdate:(id)a1 progressBlock:(id /* block */)a2;
- (void)_enumeratePublicEventsFromMomentNodes:(id)a0 progressBlock:(id /* block */)a1 usingBlock:(id /* block */)a2;
- (id)disambiguateEvents:(id)a0 forTimeLocationTuple:(id)a1 momentNode:(id)a2 graph:(id)a3;
- (void)_collectConsolidatedAddressesForMomentNodes:(id)a0 inGraph:(id)a1 largeFrequentLocationNodes:(id)a2 consolidatedAddresses:(id *)a3 consolidatedAddressesByMomentIdentifier:(id *)a4 momentNodesForConsolidatedAddresses:(id *)a5;
- (id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)a0 graph:(id)a1 largeFrequentLocationNodes:(id)a2;
- (id)publicEventCriteriaByCategoryInGraph:(id)a0;

@end
