@interface TSPComponentExternalReferenceMap : NSObject <NSCopying> {
    void *_map;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)saveToMessage:(void *)a0;
- (void)addExternalReferenceToObjectIdentifier:(long long)a0 componentIdentifier:(long long)a1 isWeak:(BOOL)a2 componentIsVersioned:(BOOL)a3;
- (void)appendReferencesFromMessage:(const void *)a0 componentIsVersioned:(BOOL)a1;
- (void)enumerateExternalReferences:(id /* block */)a0;
- (struct ComponentExternalReferenceInfo { long long x0; BOOL x1; BOOL x2; })externalReferenceInfoForObjectIdentifier:(long long)a0;
- (id)initFromMessage:(const void *)a0;
- (id)initWithComponentExternalReferenceMap:(id)a0;
- (id)initWithMapSize:(unsigned long long)a0;

@end
