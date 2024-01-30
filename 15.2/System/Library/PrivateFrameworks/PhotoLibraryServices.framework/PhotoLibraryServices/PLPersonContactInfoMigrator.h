@class CNContactStore, NSArray;

@interface PLPersonContactInfoMigrator : NSObject {
    CNContactStore *_contactStore;
    NSArray *_keysToFetch;
    int _updateNameCount;
    int _populateMatchingDictionaryCount;
}

+ (void)migratePersonContactInfoInPhotoLibrary:(id)a0;
+ (id)migrationQueue;

- (void)migratePersonContactInfoInPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)migratePersonContactInfoInContext:(id)a0;
- (void)migratePerson:(id)a0;
- (id)enumerateResultsWithIncrementalSaveUsingFetchRequest:(id)a0 inContext:(id)a1 withBlock:(id /* block */)a2;
- (void)updateNameOfPerson:(id)a0 withContact:(id)a1;
- (void)populateMatchingDictionaryOfPerson:(id)a0 withContact:(id)a1;

@end
