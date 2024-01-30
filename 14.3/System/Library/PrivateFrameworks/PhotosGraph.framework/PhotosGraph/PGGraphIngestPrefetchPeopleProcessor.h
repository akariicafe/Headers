@class NSString;

@interface PGGraphIngestPrefetchPeopleProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
