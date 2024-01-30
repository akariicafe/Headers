@interface PGWrapperMusicMemoryDisplayMetadataCacheManager : NSObject

+ (void)evictExpiredSongsWithPhotoLibrary:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;

- (id)init;

@end
