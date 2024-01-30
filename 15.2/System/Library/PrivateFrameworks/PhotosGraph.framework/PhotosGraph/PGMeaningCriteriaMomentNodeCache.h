@class PGGraphMomentNodeCollection, NSSet, PGGraphMomentNode, PGGraphPublicEventCategoryNodeCollection, NSArray, PGGraphAddressNodeCollection, PGGraphMeNodeCollection;

@interface PGMeaningCriteriaMomentNodeCache : NSObject {
    PGGraphMomentNode *_momentNode;
    NSArray *_sceneEdges;
    PGGraphMomentNodeCollection *_momentNodeAsCollection;
    PGGraphMeNodeCollection *_meNodeAsCollection;
    PGGraphAddressNodeCollection *_preciseAddressNodeCollection;
    char _hasAddressNodes;
    char _happensPartiallyAtMyHome;
    char _happensPartiallyAtMyWork;
    char _happensAtFrequentLocation;
    char _happensPartiallyAtMyHomeOrWork;
    unsigned long long _partsOfDay;
    unsigned long long _significantPartsOfDay;
}

@property (readonly) BOOL hasAddressNodes;
@property (readonly) BOOL happensPartiallyAtMyHome;
@property (readonly) BOOL happensPartiallyAtMyWork;
@property (readonly) BOOL happensAtFrequentLocation;
@property (readonly) BOOL happensPartiallyAtMyHomeOrWork;
@property (readonly) unsigned long long significantPartsOfDay;
@property (readonly) unsigned long long partsOfDay;
@property (readonly) NSSet *personNodes;
@property (readonly) NSSet *preciseAddressNodes;
@property (readonly) NSSet *preciseAreaNodes;
@property (readonly) NSSet *poiNodes;
@property (readonly) NSSet *specialPOINodes;
@property (readonly) NSSet *roiNodes;
@property (readonly) PGGraphPublicEventCategoryNodeCollection *publicEventCategoryNodes;

- (void).cxx_destruct;
- (id)initWithMomentNode:(id)a0;
- (id)preciseAddressNodeCollection;
- (void)_computeHomeWork;
- (void)enumerateSceneEdgesAndNodesUsingBlock:(id /* block */)a0;

@end
