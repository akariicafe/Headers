@interface PGMusicCatalogMonitor : NSObject

+ (void)checkMusicCatalogEligibilityWithProgressReporter:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)checkMusicCatalogEligibilityWithProgressReporter:(id)a0;
+ (void)clearCatalogMusicFromCacheWithPhotoLibrary:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;

@end
