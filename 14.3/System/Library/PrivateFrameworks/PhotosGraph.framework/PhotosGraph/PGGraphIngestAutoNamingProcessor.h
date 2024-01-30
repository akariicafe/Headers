@class NSString;

@interface PGGraphIngestAutoNamingProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)personNodesToNameInGraph:(id)a0;
+ (id)_personNodesWithoutContactInGraph:(id)a0;
+ (BOOL)hasMeNodeAndMeContactInGraph:(id)a0;

- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
