@protocol CHSChronoWidgetServiceServer;

@interface CHSProactiveService : NSObject

@property (readonly, nonatomic) id<CHSChronoWidgetServiceServer> server;

- (void)loadSuggestedWidget:(id)a0 metrics:(id)a1 stackIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)loadSuggestedWidget:(id)a0 withMetrics:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithServer:(id)a0;
- (void)suggestionBudgetsForStackIdentifiers:(id)a0 completion:(id /* block */)a1;

@end
