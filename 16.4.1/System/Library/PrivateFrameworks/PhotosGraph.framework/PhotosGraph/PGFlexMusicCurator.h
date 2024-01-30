@interface PGFlexMusicCurator : NSObject

+ (id)curateFlexMusicForMood:(unsigned long long)a0 keywords:(id)a1 recentlyUsedSongs:(id)a2 entityUUID:(id)a3 progressReporter:(id)a4 error:(id *)a5;
+ (id)generateDebugInformationForAssetCollection:(id)a0 progressReporter:(id)a1 error:(id *)a2;
+ (id)generateDebugInformationForSongWithUID:(id)a0 progressReporter:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;

@end
