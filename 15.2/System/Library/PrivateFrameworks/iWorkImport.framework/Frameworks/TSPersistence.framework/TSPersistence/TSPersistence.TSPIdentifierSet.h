@interface TSPersistence.TSPIdentifierSet : NSObject {
    void /* unknown type, empty encoding */ identifierSet;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)a0;
- (id)initFrom:(id)a0;
- (long long)countForIdentifier:(long long)a0 default:(long long)a1;
- (BOOL)intersectsIndexSet:(id)a0;
- (id)formMergeWithIdentifierSet:(id)a0;
- (id)makeMutableIdentifierSet;

@end
