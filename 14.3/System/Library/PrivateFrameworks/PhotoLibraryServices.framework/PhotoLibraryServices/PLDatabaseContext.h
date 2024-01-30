@class PLPhotoLibraryBundle, PLLazyObject;

@interface PLDatabaseContext : NSObject {
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyHighPriorityTransientLibrary;
    PLLazyObject *_lazyLowPriorityTransientLibrary;
    PLLazyObject *_lazyCplLibrary;
    PLLazyObject *_lazyMomentLibrary;
    PLLazyObject *_lazyNonTransientLibrary;
}

- (void)perform:(id /* block */)a0;
- (id)newNonTransientLibrary;
- (id)newLowPriorityTransientLibrary;
- (void).cxx_destruct;
- (void)dealloc;
- (id)momentLibrary;
- (void)performTransaction:(id /* block */)a0;
- (id)lowPriorityTransientLibrary;
- (id)highPriorityTransientLibrary;
- (id)cplLibrary;
- (void)performTransactionSync:(id /* block */)a0;
- (id)newHighPriorityTransientLibrary;
- (id)initWithLibraryBundle:(id)a0;
- (id)nonTransientLibrary;
- (void)performSync:(id /* block */)a0;
- (id)newCplLibrary;
- (id)newMomentLibrary;
- (void)invalidate;
- (id)transientLibraryWithCurrentQoS;

@end
