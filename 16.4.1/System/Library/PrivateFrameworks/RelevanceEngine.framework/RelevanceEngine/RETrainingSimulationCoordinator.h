@class NSString, NSMutableDictionary, NSMapTable, RETrainingSimulationServer;

@interface RETrainingSimulationCoordinator : RESingleton <REElementActionDelegate, RETrainingSimulationServerInterface> {
    RETrainingSimulationServer *_server;
    NSMutableDictionary *_elementsAddedByEngine;
    NSMapTable *_actionCompletionBlocks;
}

@property BOOL isActivelyTraining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prewarm;

- (id)_init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)elementAction:(id)a0 didFinishTask:(BOOL)a1;
- (void)elementAction:(id)a0 wantsToPerformTapActionForComplicationSlot:(id)a1;
- (void)elementAction:(id)a0 wantsViewControllerDisplayed:(id)a1;
- (void)_accesssEngineWithName:(id)a0 completion:(id /* block */)a1;
- (id)_engineWithName:(id)a0;
- (void)_relevanceEnginesDidChange;
- (id)_unavailableEngineWithNameError:(id)a0;
- (void)availableRelevanceEngines:(id /* block */)a0;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllElementsInRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)relevanceEngine:(id)a0 createElementFromDescription:(id)a1 completion:(id /* block */)a2;
- (void)relevanceEngine:(id)a0 encodedObjectAtPath:(id)a1 completion:(id /* block */)a2;
- (void)relevanceEngine:(id)a0 performCommand:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)relevanceEngine:(id)a0 runActionOfElementWithDescription1:(id)a1 completion:(id /* block */)a2;

@end
