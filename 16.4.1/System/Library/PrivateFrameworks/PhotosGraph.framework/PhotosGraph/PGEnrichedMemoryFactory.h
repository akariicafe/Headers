@class PGMoodKeywordComputer, PGMemoryCurationSession, PGTitleGenerationContext, NSObject;
@protocol OS_os_log;

@interface PGEnrichedMemoryFactory : NSObject {
    PGMoodKeywordComputer *_moodKeywordComputer;
    NSObject<OS_os_log> *_loggingConnection;
    PGMemoryCurationSession *_memoryCurationSession;
    PGTitleGenerationContext *_titleGenerationContext;
}

+ (long long)notificationLevelForTriggeredMemory:(id)a0 withLocalDate:(id)a1 graph:(id)a2;
+ (double)notificationScoreForNotificationLevel:(long long)a0 electionScore:(double)a1;
+ (void)requestFlexMusicCurationForEnrichedMemories:(id)a0 photoLibrary:(id)a1 progressReporter:(id)a2 resultHandler:(id /* block */)a3;
+ (void)requestMusicCurationForEnrichedMemories:(id)a0 context:(id)a1 graph:(id)a2 progressReporter:(id)a3 resultHandler:(id /* block */)a4;

- (void).cxx_destruct;
- (id)_curatedAssetsWithFeeder:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)_extendedCuratedAssetsWithFeeder:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)_keyAssetWithFeeder:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)_memoryEnricherFromTriggeredMemory:(id)a0;
- (unsigned long long)_numberOfGuestAssetInAssets:(id)a0;
- (id)curatedAssetUUIDsWithTriggeredMemory:(id)a0 keyAsset:(id)a1 extendedCuratedAssetUUIDs:(id)a2 targetCurationDuration:(double)a3 graph:(id)a4 allowGuestAsset:(BOOL)a5 progressReporter:(id)a6;
- (id)debugEnrichedMemoryWithTriggeredMemory:(id)a0 withConfiguration:(id)a1 graph:(id)a2 progressReporter:(id)a3;
- (id)enrichedMemoryWithTriggeredMemory:(id)a0 withConfiguration:(id)a1 graph:(id)a2 progressReporter:(id)a3;
- (id)enrichedMemoryWithTriggeredMemory:(id)a0 withConfiguration:(id)a1 graph:(id)a2 progressReporter:(id)a3 debug:(BOOL)a4;
- (id)initWithMemoryCurationSession:(id)a0 graph:(id)a1 loggingConnection:(id)a2;

@end
