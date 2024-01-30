@interface PGGraphPersonTranslator : PGGraphEntityTranslator

+ (id)entityClassName;

- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)a0 change:(id)a1 progressBlock:(id /* block */)a2;
- (id)graphChangesForDeletedLocalIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (id)stateUpdateProperties;
- (id)verifiedTypeProperties;

@end
