@class PGGraphMeaningNodeCollection, NSDate, NSString, PGGraphFeatureNodeCollection, PGGraphHighlightNodeCollection, PGGraphPersonNodeCollection, PGGraphMomentNodeCollection, CLLocation, PGGraphSceneNodeCollection;

@interface PGUpNextHighlightBasedMatchingInfo : PGUpNextMomentCollectionBasedMatchingInfo <PGUpNextMatchingTarget>

@property (readonly, nonatomic) PGGraphHighlightNodeCollection *highlightNodeAsCollection;
@property (readonly, nonatomic) unsigned long long nodeIdentifier;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *meaningNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) BOOL isTripMemory;
@property (readonly, nonatomic) CLLocation *representativeLocation;
@property (readonly, nonatomic) NSDate *representativeDate;
@property (readonly, nonatomic) NSString *debugInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchingInfosWithHighlightNodes:(id)a0;

- (void).cxx_destruct;
- (id)initWithHighlightNodeAsCollection:(id)a0;
- (id)initWithHighlightNodeAsCollection:(id)a0 momentNodes:(id)a1;

@end
