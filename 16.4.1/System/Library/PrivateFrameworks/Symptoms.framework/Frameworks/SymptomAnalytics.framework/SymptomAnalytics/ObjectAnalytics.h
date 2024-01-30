@class NSString, AnalyticsWorkspace;

@interface ObjectAnalytics : NSObject {
    AnalyticsWorkspace *wspace;
    NSString *entityName;
}

- (void)save;
- (void).cxx_destruct;
- (id)createEntity;
- (void)refresh:(id)a0;
- (id)fetchEntitiesFreeForm:(id)a0 sortDesc:(id)a1;
- (id)initWithWorkspace:(id)a0 entityName:(id)a1 withCache:(BOOL)a2;
- (void)removeEntities:(id)a0;
- (id)_fetch:(id)a0 sortDesc:(id)a1;
- (id)_fetch:(id)a0 sortDesc:(id)a1 limit:(unsigned long long)a2 batchSize:(unsigned long long)a3;
- (id)_firstLastHappened:(BOOL)a0;
- (unsigned long long)countEntitiesMatching:(id)a0;
- (id)createEntityForEntityName:(id)a0;
- (id)createTemporaryEntity;
- (id)createTemporaryEntityForEntityName:(id)a0;
- (id)fetchAllEntityDictionariesWithProperties:(id)a0;
- (id)fetchEntitiesFreeForm:(id)a0 sortDesc:(id)a1 limit:(unsigned long long)a2 batchSize:(unsigned long long)a3;
- (id)fetchEntityDictionariesWithProperties:(id)a0 fetchRequestProperties:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 limit:(unsigned long long)a4 offset:(unsigned long long)a5 includeObjectID:(BOOL)a6;
- (id)fetchEntityDictionariesWithProperties:(id)a0 predicate:(id)a1;
- (id)fetchEntityDictionariesWithProperties:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)fetchEntityDictionariesWithProperties:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(unsigned long long)a3;
- (id)fetchEntityDictionariesWithProperties:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(unsigned long long)a3 offset:(unsigned long long)a4 includeObjectID:(BOOL)a5;
- (id)firstHappened;
- (id)getDescriptionForName:(id)a0;
- (id)lastHappened;
- (void)moveTemporaryEntityToMainContext:(id)a0;
- (long long)removeEntitiesMatching:(id)a0;
- (long long)removeEntitiesMatching:(id)a0 wspaceReset:(BOOL)a1;
- (unsigned long long)updateEntitiesMatching:(id)a0 properties:(id)a1;

@end
