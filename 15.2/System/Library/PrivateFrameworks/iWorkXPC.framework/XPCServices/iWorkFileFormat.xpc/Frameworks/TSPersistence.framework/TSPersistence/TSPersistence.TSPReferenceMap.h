@interface TSPersistence.TSPReferenceMap : NSObject {
    void /* unknown type, empty encoding */ referenceMap;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)enumerateReferencesUsingBlock:(id /* block */)a0;
- (id)allReferencesFromIdentifier:(long long)a0;
- (id)makeMutableReferenceMap;

@end
