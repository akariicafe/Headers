@class NSArray, PGManager, CLSCurationContext;
@protocol PGGraphDataModelEnrichmentManagerDelegate;

@interface PGGraphDataModelEnrichmentManager : NSObject

@property (class, readonly, nonatomic) NSArray *lightWeightEnrichmentProcessors;

@property (readonly, nonatomic) PGManager *manager;
@property (readonly, nonatomic) CLSCurationContext *curationContext;
@property (weak, nonatomic) id<PGGraphDataModelEnrichmentManagerDelegate> delegate;
@property (readonly, nonatomic) NSArray *enrichmentProcessors;
@property (readonly, nonatomic) unsigned long long enrichmentContext;
@property (nonatomic) BOOL forceRun;

+ (id)_allEnrichmentProcessorsWithTailorOptions:(unsigned long long)a0;
+ (id)backgroundEnrichmentProcessors;
+ (id)enrichmentProcessorsForDataModelEnrichmentContext:(unsigned long long)a0;
+ (id)enrichmentProcessorsForDataModelEnrichmentContexts:(id)a0;
+ (id)liveUpdateEnrichmentProcessors;
+ (id)weeklyEnrichmentProcessors;

- (void).cxx_destruct;
- (BOOL)_enrichDataModelWithGraphUpdateInventory:(id)a0 error:(id *)a1 progressBlock:(id /* block */)a2;
- (BOOL)enrichDataModelForHighlightUUIDs:(id)a0 withError:(id *)a1 progressBlock:(id /* block */)a2;
- (BOOL)enrichDataModelWithError:(id *)a0 progressBlock:(id /* block */)a1;
- (BOOL)enrichDataModelWithGraphUpdateInventory:(id)a0 error:(id *)a1 progressBlock:(id /* block */)a2;
- (id)initWithManager:(id)a0 enrichmentContext:(unsigned long long)a1;
- (id)initWithManager:(id)a0 enrichmentProcessors:(id)a1;

@end
