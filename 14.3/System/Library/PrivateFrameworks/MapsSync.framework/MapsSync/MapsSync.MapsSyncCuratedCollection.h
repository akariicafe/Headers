@interface MapsSync.MapsSyncCuratedCollection : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _curatedCollectionIdentifier;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
}

@property (nonatomic, readonly) long long identifierHash;
@property (nonatomic, readonly) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, readonly) int resultProviderIdentifier;

- (id)initWithCuratedCollectionIdentifier:(unsigned long long)a0 resultProviderIdentifier:(int)a1;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)a0;
- (void)deleteWithCompletion:(id /* block */)a0;
- (id)initWithObject:(id)a0;
- (Class)mutableObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (Class)managedObjectClass;
- (BOOL)isEqual:(id)a0;

@end
