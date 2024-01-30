@interface MSCollectionItem : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _collectionChanges;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) long long positionIndex;

- (void).cxx_destruct;
- (id)fetchCollections;
- (void)removeCollection:(id)a0;
- (void)addCollection:(id)a0;
- (void)flushChanges;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 collection:(id)a1;
- (id)initWithStore:(id)a0 positionIndex:(long long)a1;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
