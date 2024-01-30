@interface MKApplicationDatabase : NSObject {
    struct sqlite3 { } *_database;
}

- (void)begin;
- (void)rollback;
- (void)commit;
- (void)drop;
- (void)open:(id)a0;
- (void)dealloc;
- (id)identifiers;
- (void)close;
- (BOOL)addIdentifier:(id)a0;
- (id)init;
- (void)create;
- (void)addIdentifiers:(id)a0;
- (BOOL)_addAppStoreIdentifier:(id)a0;
- (void)addAppStoreIdentifier:(id)a0;
- (id)appStoreIdentifiers;
- (long long)countForAppStoreIdentifiers;
- (void)query:(id)a0;

@end
