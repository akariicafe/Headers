@interface MSHistoryCuratedCollection : MSHistoryItem {
    void /* unknown type, empty encoding */ _curatedCollectionIdentifier;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) unsigned long long curatedCollectionIdentifier;
@property (nonatomic) int resultProviderIdentifier;

- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 curatedCollectionIdentifier:(unsigned long long)a1 resultProviderIdentifier:(int)a2;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
