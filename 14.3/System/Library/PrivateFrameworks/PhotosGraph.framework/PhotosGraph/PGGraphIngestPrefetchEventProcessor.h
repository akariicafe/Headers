@class NSString;

@interface PGGraphIngestPrefetchEventProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)prefetchEventsWithSortedMomentNodes:(id)a0 locationsToPrefetch:(id *)a1 progressBlock:(id /* block */)a2;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
