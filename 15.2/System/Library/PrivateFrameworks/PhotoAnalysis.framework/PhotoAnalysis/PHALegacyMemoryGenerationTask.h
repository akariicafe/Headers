@class NSString;

@interface PHALegacyMemoryGenerationTask : NSObject <PHATask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_infoForGraphCollectionBasedMemory:(id)a0;
- (id)_infoForMomentsBackingMemory:(id)a0;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)_minimalLegacyFeatureVectorWithMemory:(id)a0;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (long long)_phTitleCategoryForPGTitleCategory:(long long)a0;
- (void)generateMemoriesWithOptions:(id)a0 graphManager:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)_shouldGenerateMiroMovie;
- (id)_infoForMemory:(id)a0 representativeAssetCount:(unsigned long long)a1 isTransientMemory:(BOOL)a2 graphManager:(id)a3;
- (id)_featureVectorWithMemory:(id)a0 photoLibrary:(id)a1;
- (void)_processMoodForMemory:(id)a0 withMoodHistory:(id)a1 moodGenerationContext:(id)a2 graphManager:(id)a3;
- (long long)_miroMoodForMemoryMood:(unsigned long long)a0;
- (unsigned long long)_memoryMoodForMiroMood:(long long)a0;

@end
