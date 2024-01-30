@class NSMutableDictionary;

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator {
    NSMutableDictionary *_pregeneratedIdMappings;
}

- (void).cxx_destruct;
- (void)addIdMapping:(id)a0 forProperty:(unsigned int)a1;
- (id)initWithDatabaseConnection:(id)a0 tableName:(id)a1;
- (long long)nextPersistentIDForImportItem:(struct shared_ptr<ML3ImportItem> { struct ML3ImportItem *x0; struct __shared_weak_count *x1; })a0;
- (void)removePersistentIDFromIdMapping:(long long)a0;

@end
