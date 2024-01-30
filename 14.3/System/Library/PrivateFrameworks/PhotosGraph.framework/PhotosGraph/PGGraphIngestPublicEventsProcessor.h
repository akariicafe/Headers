@class NSDictionary, NSSet, NSString;

@interface PGGraphIngestPublicEventsProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly, nonatomic) NSDictionary *publicEventCriteriaByCategory;
@property (retain, nonatomic) NSSet *largeFrequentLocationNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_collectConsolidatedAddressesForMomentNodes:(id)a0 inGraph:(id)a1 consolidatedAddresses:(id *)a2 consolidatedAddressesByMomentIdentifier:(id *)a3 momentNodesForConsolidatedAddresses:(id *)a4;
- (void).cxx_destruct;
- (id)disambiguateEvents:(id)a0 forTimeLocationTuple:(id)a1 momentNode:(id)a2 graph:(id)a3;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)a0 graph:(id)a1;
- (void)_insertPublicEventsFromMomentNodes:(id)a0 graphUpdate:(id)a1 progressBlock:(id /* block */)a2;
- (id)publicEventCriteriaByCategoryInGraph:(id)a0;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
