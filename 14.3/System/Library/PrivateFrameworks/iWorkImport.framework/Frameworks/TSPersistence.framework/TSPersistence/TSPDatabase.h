@class NSURL;

@interface TSPDatabase : TSUDatabase {
    NSURL *_packageURL;
    BOOL _incrementalVacuum;
    struct sqlite3_stmt { } *_insertObjectStatement;
    struct sqlite3_stmt { } *_insertDataStateStatement;
    struct sqlite3_stmt { } *_updateDataStateStatement;
    struct sqlite3_stmt { } *_insertRelationshipStatement;
    struct sqlite3_stmt { } *_relationshipTargetsStatement;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)closeWithError:(id *)a0;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (BOOL)needsUpgradeFromSchemaVersion:(int)a0;
- (BOOL)upgradeFromSchemaVersion:(int)a0 error:(id *)a1;
- (id)initReadonlyWithPath:(id)a0 error:(id *)a1;
- (struct sqlite3_blob { } *)openDataStateBlobWithIdentifier:(long long)a0 error:(id *)a1;
- (id)queryFirstObjectWithStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)objectFromStatement:(struct sqlite3_stmt { } *)a0;
- (BOOL)documentVersion:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)lastObjectIdentifier:(long long *)a0 error:(id *)a1;
- (BOOL)numberOfDatabaseObjects:(unsigned long long *)a0 error:(id *)a1;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x0; } x2; } x0; } *)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x0; } x2; } x0; } *)a0 error:(id *)a1;
- (struct sqlite3_blob { } *)openBlobForObject:(id)a0 error:(id *)a1;
- (id)queryObjectWithIdentifier:(long long)a0 error:(id *)a1;
- (id)queryObjectsWithMessageTypes:(const int *)a0 messageTypesCount:(int)a1 error:(id *)a2;
- (BOOL)setDocumentVersion:(struct { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (BOOL)setClosedCleanlyToken:(long long)a0 error:(id *)a1;
- (BOOL)documentVersion:(struct { unsigned long long x0; unsigned long long x1; } *)a0 closedCleanlyToken:(long long *)a1 error:(id *)a2;
- (BOOL)insertObjectWithIdentifier:(long long)a0 stateIdentifier:(const struct ObjectStateIdentifier { BOOL x0; long long x1; BOOL x2; id x3; } *)a1 classType:(int)a2 error:(id *)a3;
- (BOOL)insertDataStateWithSize:(int)a0 identifier:(long long *)a1 error:(id *)a2;
- (BOOL)updateDataStateWithIdentifier:(long long)a0 size:(int)a1 error:(id *)a2;
- (struct sqlite3_blob { } *)openDataStateBlobWithIdentifier:(long long)a0 willWrite:(BOOL)a1 error:(id *)a2;
- (BOOL)insertRelationshipWithSourceIdentifier:(long long)a0 targetIdentifier:(long long)a1 error:(id *)a2;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x0; } x2; } x0; } *)newRelationshipTargetsForSourceIdentifier:(long long)a0 error:(id *)a1;
- (BOOL)parseArchive:(struct Message { void /* function */ **x0; } *)a0 forObject:(id)a1 error:(id *)a2;

@end
