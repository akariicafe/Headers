@class NSString, PGGraphBuilder;

@interface PGGraphIngestAutoNamingProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_personNodesWithoutContactInGraph:(id)a0;
+ (BOOL)hasMeNodeAndMeContactInGraph:(id)a0;
+ (id)personNodesToNameInGraph:(id)a0;

@end
