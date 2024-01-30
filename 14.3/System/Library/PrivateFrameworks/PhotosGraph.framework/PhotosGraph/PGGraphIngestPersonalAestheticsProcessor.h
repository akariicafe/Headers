@class NSString;

@interface PGGraphIngestPersonalAestheticsProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)_savePersonalHighAestheticsThreshold:(double)a0 personalGoodAestheticsThreshold:(double)a1 toGraph:(id)a2;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
