@interface KNBuildUtility : NSObject

+ (id)chunksInBuilds:(id)a0;
+ (id)chunksForInfos:(id)a0;
+ (id)UUIDToTSPObjectMapForTSPObjects:(id)a0;
+ (BOOL)animationInfo:(id)a0 onInfo:(id)a1 canRunSimultaneouslyWithAnimationInfo:(id)a2 onInfo:(id)a3;
+ (id)buildUUIDToChunkIdentifiersMapForChunkIdentifiers:(id)a0;
+ (id)buildsForChunks:(id)a0;
+ (id)buildsToChunksMapForBuilds:(id)a0 chunks:(id)a1;
+ (id)buildsToChunksMapForChunks:(id)a0;
+ (unsigned long long)countOfInfosThatSupportContentBuilds:(id)a0;
+ (id)identifiersForChunks:(id)a0;
+ (id)nonNilChunkIdentifierFromPossiblyNilChunk:(id)a0;
+ (id)orderedBuildsFromUnorderedBuilds:(id)a0;
+ (long long)sharedAnimationTypeForBuildChunks:(id)a0;
+ (long long)sharedAnimationTypeForBuilds:(id)a0;
+ (id)uniqueBuildsOrderedByChunks:(id)a0;
+ (id)validIdentifierForChunkToInsertAfterFromPossiblyInvalidIdentifier:(id)a0 build:(id)a1;

@end
