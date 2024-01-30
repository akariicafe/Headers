@class PGGraphMeaningNodeCollection, NSDate, PGGraphMemoryNodeCollection, NSString, PGGraphFeatureNodeCollection, PGGraphPersonNodeCollection, PGGraphMomentNodeCollection, CLLocation, PGGraphSceneNodeCollection;

@interface PGUpNextMemoryBasedMatchingInfo : PGUpNextMomentCollectionBasedMatchingInfo <PGUpNextMatchingTarget> {
    PGGraphFeatureNodeCollection *_memoryFeatureNodes;
}

@property (readonly, nonatomic) PGGraphMemoryNodeCollection *memoryNodeAsCollection;
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

+ (id)matchingInfosWithMemoryNodes:(id)a0;

- (void).cxx_destruct;
- (id)initWithMemoryNodeAsCollection:(id)a0;
- (BOOL)_implIsTripMemory;
- (id)initWithMemoryNodeAsCollection:(id)a0 momentNodes:(id)a1;
- (id)initWithMemoryNodeAsCollection:(id)a0 momentNodes:(id)a1 personNodes:(id)a2 sceneNodes:(id)a3 meaningNodes:(id)a4 isTripMemory:(BOOL)a5 representativeLocation:(id)a6 representativeDate:(id)a7 memoryFeatureNodes:(id)a8;

@end
