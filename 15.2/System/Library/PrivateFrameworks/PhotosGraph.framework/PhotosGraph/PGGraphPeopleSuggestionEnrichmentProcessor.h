@class NSString;

@interface PGGraphPeopleSuggestionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (class, readonly, nonatomic) BOOL supportsBackgroundJob;
@property (class, readonly, nonatomic) double backgroundJobTimeout;
@property (class, readonly, nonatomic) NSString *backgroundJobName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enrichDataModelWithManager:(id)a0 curationContext:(id)a1 graphUpdateInventory:(id)a2 progressBlock:(id /* block */)a3;
- (void)_performPeopleSuggestionLearningWithManager:(id)a0 progressBlock:(id /* block */)a1;
- (void)_performPeopleSuggestionForHomeWithManager:(id)a0 progressBlock:(id /* block */)a1;

@end
