@class NSString;

@interface MapsSync.MapsSyncCuratedCollection : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _curatedCollectionIdentifier;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
}

@property (nonatomic, readonly) long long identifierHash;
@property (nonatomic, readonly) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, readonly) int resultProviderIdentifier;
@property (nonatomic, readonly) NSString *description;

- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)deleteWithCompletion:(id /* block */)a0;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)a0;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)a0 resultProviderIdentifier:(int)a1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
