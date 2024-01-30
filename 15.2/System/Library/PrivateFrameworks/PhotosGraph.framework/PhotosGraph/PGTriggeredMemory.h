@class PGGraphMomentNodeCollection, NSIndexSet, NSArray, NSDictionary, NSDate, PGGraphFeatureNodeCollection, NSString;

@interface PGTriggeredMemory : NSObject <PGTriggeredMemoryProtocol>

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSIndexSet *triggerTypes;
@property (readonly, nonatomic) long long photosGraphVersion;
@property (nonatomic) double electionScore;
@property (retain, nonatomic) NSArray *blockableFeatures;
@property (readonly, nonatomic) NSDictionary *validityIntervalByTriggerType;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) NSString *uniqueMemoryIdentifier;
@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) unsigned long long memoryCategorySubcategory;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (id)initWithMemoryCategory:(unsigned long long)a0 memoryCategorySubcategory:(unsigned long long)a1 memoryMomentNodes:(id)a2 memoryFeatureNodes:(id)a3 validityIntervalByTriggerType:(id)a4 creationDate:(id)a5 uniqueMemoryIdentifier:(id)a6;
- (id)initWithMemoryNode:(id)a0 validityIntervalByTriggerType:(id)a1 creationDate:(id)a2;
- (id)initWithMemoryCategory:(unsigned long long)a0 memoryCategorySubcategory:(unsigned long long)a1 memoryMomentNodes:(id)a2 memoryFeatureNodes:(id)a3 validityIntervalByTriggerType:(id)a4 creationDate:(id)a5 uniqueMemoryIdentifier:(id)a6 photosGraphVersion:(long long)a7;

@end
