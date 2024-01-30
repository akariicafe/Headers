@class CHSChronoServicesConnection;

@interface CHSProactiveService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (void)loadSuggestedWidget:(id)a0 withMetrics:(id)a1 completion:(id /* block */)a2;
- (id)initWithConnection:(id)a0;
- (id)init;
- (void)suggestionBudgetsForStackIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)loadSuggestedWidget:(id)a0 metrics:(id)a1 stackIdentifier:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
