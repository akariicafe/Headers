@class NSString;

@interface PGGraphSearchEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (class, readonly, nonatomic) BOOL supportsBackgroundJob;
@property (class, readonly, nonatomic) double backgroundJobTimeout;
@property (class, readonly, nonatomic) NSString *backgroundJobName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldProcessGraphUpdate:(id)a0;
- (void)_processGraphUpdateInventory:(id)a0 manager:(id)a1 progressBlock:(id /* block */)a2;
- (void)enrichDataModelWithManager:(id)a0 graphUpdateInventory:(id)a1 progressBlock:(id /* block */)a2;

@end
