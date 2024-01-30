@class PHPersistentChangeFetchOptions, NSArray, PHPersistentChangeEnumerationContext, PHPhotoLibrary;

@interface PHPersistentChangeFetchResult : NSObject {
    NSArray *_transactions;
    PHPhotoLibrary *_library;
    PHPersistentChangeFetchOptions *_options;
    PHPersistentChangeEnumerationContext *_enumerationContext;
    unsigned long long _changeCount;
}

+ (id)fetchResultWithToken:(id)a0 options:(id)a1 photoLibrary:(id)a2 error:(id *)a3;

- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (id)_managedObjectContext;
- (void)enumerateChangesWithBlock:(id /* block */)a0;
- (void)enumeratePHChangesWithBlock:(id /* block */)a0;
- (id)initWithTransactions:(id)a0 options:(id)a1 photoLibrary:(id)a2;
- (id)iteratorForPersistentChangeEnumeration;
- (id)nextPersistentChangeWithIterator:(id)a0;

@end
