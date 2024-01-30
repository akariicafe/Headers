@interface PGMusicCache : NSObject {
    void /* unknown type, empty encoding */ cacheURL;
    void /* unknown type, empty encoding */ persistentStoreCoordinator;
    void /* unknown type, empty encoding */ managedObjectContext;
}

+ (id)cacheWithPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)cacheAtURL:(id)a0 error:(id *)a1;

- (BOOL)removeSongSourcesWithSongSourceCategory:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)removeSongSourcesWithSongSourceCategories:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)statusAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)removeAllWithProgressReporter:(id)a0 error:(id *)a1;

@end
