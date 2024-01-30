@interface TSPersistence.TSPIdentifierSet : NSObject {
    void /* unknown type, empty encoding */ identifierSet;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)a0;
- (long long)countForIdentifier:(long long)a0 default:(long long)a1;
- (id)formMergeWithIdentifierSet:(id)a0;
- (id)initFrom:(id)a0;
- (BOOL)intersectsIndexSet:(id)a0;
- (id)makeMutableIdentifierSet;

@end
