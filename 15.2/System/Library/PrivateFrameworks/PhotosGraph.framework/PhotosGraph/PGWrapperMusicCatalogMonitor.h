@interface PGWrapperMusicCatalogMonitor : NSObject

+ (void)checkMusicCatalogEligibilityWithProgressReporter:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)checkMusicCatalogEligibilityWithProgressReporter:(id)a0;
+ (BOOL)clearCatalogMusicFromCacheWithPhotoLibrary:(id)a0 progressReporter:(id)a1 error:(id *)a2;

- (id)init;

@end
