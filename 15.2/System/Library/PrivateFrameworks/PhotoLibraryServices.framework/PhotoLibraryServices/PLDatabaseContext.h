@class PLPhotoLibraryBundle, PLLazyObject, PLPhotoLibrary;

@interface PLDatabaseContext : NSObject {
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyMomentLibrary;
    PLLazyObject *_lazyNonTransientLibrary;
    PLPhotoLibrary *_syndicationIngestLibrary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syndicationIngestLibraryLock;
    unsigned long long _syndicationIngestLibraryRefCount;
}

+ (void)_configureShortLivedLibraryOptionsForAutomaticPin:(id)a0;
+ (id)newShortLivedLibraryWithName:(const char *)a0 bundle:(id)a1;

- (void)performSync:(id /* block */)a0 withName:(const char *)a1;
- (void)performTransaction:(id /* block */)a0 withName:(const char *)a1;
- (id)sharedNonTransientLibrary;
- (id)newShortLivedCplLibraryWithNameSuffix:(const char *)a0;
- (id)newShortLivedLibraryWithName:(const char *)a0;
- (id)newShortLivedLibraryForHistoryPersistenceReadingWithName:(const char *)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)startUsingSyndicationIngestLibrary;
- (void)stopUsingSyndicationIngestLibrary;
- (void)dealloc;
- (void)performTransactionSync:(id /* block */)a0 withName:(const char *)a1;
- (id)initWithLibraryBundle:(id)a0;
- (void)perform:(id /* block */)a0 withName:(const char *)a1;
- (id)newMomentLibrary;
- (id)newShortLivedMacOpenClientLibraryWithName:(const char *)a0;
- (id)newNonTransientLibrary;
- (id)momentLibrary;

@end
