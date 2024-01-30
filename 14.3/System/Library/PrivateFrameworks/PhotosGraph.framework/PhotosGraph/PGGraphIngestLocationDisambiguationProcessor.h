@class NSString;

@interface PGGraphIngestLocationDisambiguationProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)removeDuplicateFromCityNames:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
