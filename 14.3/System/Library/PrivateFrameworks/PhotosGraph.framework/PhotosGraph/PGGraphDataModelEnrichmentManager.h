@class NSArray, PGManager;
@protocol PGGraphDataModelEnrichmentManagerDelegate;

@interface PGGraphDataModelEnrichmentManager : NSObject

@property (class, readonly, nonatomic) NSArray *lightWeightEnrichmentProcessors;

@property (readonly, nonatomic) PGManager *manager;
@property (weak, nonatomic) id<PGGraphDataModelEnrichmentManagerDelegate> delegate;
@property (readonly, nonatomic) NSArray *enrichmentProcessors;
@property (readonly, nonatomic) long long enrichmentContext;

+ (id)enrichmentProcessorsForDataModelEnrichmentContext:(long long)a0;
+ (id)backgroundEnrichmentProcessors;
+ (id)weeklyEnrichmentProcessors;
+ (id)liveUpdateEnrichmentProcessors;
+ (id)_allEnrichmentProcessorsWithTailorOptions:(unsigned long long)a0;

- (BOOL)_enrichDataModelWithGraphUpdateInventory:(id)a0 error:(id *)a1 progressBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0 enrichmentContext:(long long)a1;
- (BOOL)enrichDataModelWithGraphUpdateInventory:(id)a0 error:(id *)a1 progressBlock:(id /* block */)a2;
- (BOOL)enrichDataModelWithError:(id *)a0 progressBlock:(id /* block */)a1;
- (id)initWithManager:(id)a0 enrichmentProcessors:(id)a1;
- (BOOL)enrichDataModelForHighlightUUIDs:(id)a0 withError:(id *)a1 progressBlock:(id /* block */)a2;

@end
