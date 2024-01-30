@class PLPhotoLibraryBundle, PLSyndicationIngestMutex, PLLazyObject;

@interface PLDatabaseContext : NSObject {
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyMomentLibrary;
}

@property (readonly) PLSyndicationIngestMutex *syndicationIngestMutex;
@property (readonly) long long wellKnownPhotoLibraryIdentifier;

+ (id)newShortLivedLibraryWithName:(const char *)a0 bundle:(id)a1;

- (id)newMomentLibrary;
- (void)performSync:(id /* block */)a0 withName:(const char *)a1;
- (id)newShortLivedCplLibraryWithNameSuffix:(const char *)a0;
- (id)newShortLivedLibraryForHistoryPersistenceReadingWithName:(const char *)a0;
- (id)newShortLivedMacOpenClientLibraryWithName:(const char *)a0;
- (void)performTransaction:(id /* block */)a0 withName:(const char *)a1;
- (id)newShortLivedLibraryWithName:(const char *)a0;
- (void)dealloc;
- (id)momentLibrary;
- (void)performTransactionSync:(id /* block */)a0 withName:(const char *)a1;
- (void)invalidate;
- (void)perform:(id /* block */)a0 withName:(const char *)a1;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;

@end
