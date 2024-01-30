@class NSString, RETrainingSimulationClient, RETrainingSimulationServer;

@interface _RETrainingProxy : NSObject <RETrainingSimulationServerInterface, RETrainingSimulationClientDelegate> {
    RETrainingSimulationClient *_client;
}

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) RETrainingSimulationServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (void)availableRelevanceEngines:(id /* block */)a0;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllElementsInRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)a0 completion:(id /* block */)a1;
- (void)relevanceEngine:(id)a0 createElementFromDescription:(id)a1 completion:(id /* block */)a2;
- (void)relevanceEngine:(id)a0 encodedObjectAtPath:(id)a1 completion:(id /* block */)a2;
- (void)relevanceEngine:(id)a0 performCommand:(id)a1 withOptions:(id)a2 completion:(id /* block */)a3;
- (void)relevanceEngine:(id)a0 runActionOfElementWithDescription1:(id)a1 completion:(id /* block */)a2;

@end
