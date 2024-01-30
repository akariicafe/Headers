@class NSArray, NSString, NSSet;

@interface PGUpNextMemoriesGenerationRequest : NSObject

@property (readonly, nonatomic) NSArray *customVectors;
@property (readonly, nonatomic) BOOL wantsVerboseDebugInfo;
@property (readonly, nonatomic) unsigned short sharingFilter;
@property (readonly, nonatomic) NSString *rootMemoryLocalIdentifier;
@property (readonly, nonatomic) NSArray *momentUUIDs;
@property (readonly, nonatomic) NSSet *memoryLocalIdentifiersToAvoid;
@property (readonly, nonatomic) unsigned long long targetUpNextMemoryCount;

+ (id)_baseMemoryFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)_memoryNodesWithSignificantOverlapWithMomentNodes:(id)a0;
+ (id)_requestErrorWithCode:(long long)a0 description:(id)a1;
+ (id)requestWithDictionaryRepresentation:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)_enumerateMemoriesToAvoidWithWorkingContext:(id)a0 usingBlock:(id /* block */)a1;
- (id)_fetchRootMemoryWithPhotoLibrary:(id)a0;
- (id)_momentUUIDsForMemory:(id)a0;
- (id)ephemeralMemoriesByUniqueMemoryIdentifiersWithWorkingContext:(id)a0;
- (id)fetchMemoryLocalIdentifiersWithWorkingContext:(id)a0 musicCurationOptions:(id)a1 error:(id *)a2;
- (id)initWithRootMemoryLocalIdentifier:(id)a0 momentUUIDs:(id)a1 memoryLocalIdentifiersToAvoid:(id)a2 targetUpNextMemoryCount:(unsigned long long)a3 customVectors:(id)a4 wantsVerboseDebugInfo:(BOOL)a5 sharingFilter:(unsigned short)a6;
- (id)initWithRootMemoryLocalIdentifier:(id)a0 momentUUIDs:(id)a1 memoryLocalIdentifiersToAvoid:(id)a2 targetUpNextMemoryCount:(unsigned long long)a3 sharingFilter:(unsigned short)a4;
- (id)upNextMemoryLocalIdentifiersWithWorkingContext:(id)a0 rootMemory:(id)a1 ephemeralMemoriesByUniqueMemoryIdentifiers:(id)a2 uniqueMemoryIdentifiersOfMemoriesToAvoid:(id)a3 aggregator:(id)a4 debugInfo:(out id *)a5 error:(id *)a6;

@end
