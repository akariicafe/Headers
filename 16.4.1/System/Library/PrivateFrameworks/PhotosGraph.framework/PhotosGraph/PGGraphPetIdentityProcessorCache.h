@class NSSet, PGGraph;

@interface PGGraphPetIdentityProcessorCache : NSObject {
    PGGraph *_graph;
    NSSet *_relevantAssetUUIDsForPetFaces;
}

@property (readonly, nonatomic) NSSet *relevantAssetUUIDsForPetFaces;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;

@end
