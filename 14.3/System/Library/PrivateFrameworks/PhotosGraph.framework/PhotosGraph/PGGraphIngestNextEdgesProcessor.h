@class NSString;

@interface PGGraphIngestNextEdgesProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processNextEdgesWithSortedMomentNodes:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
