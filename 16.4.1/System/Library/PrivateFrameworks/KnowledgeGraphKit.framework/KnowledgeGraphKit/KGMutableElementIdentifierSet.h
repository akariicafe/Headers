@interface KGMutableElementIdentifierSet : KGElementIdentifierSet

- (void *)mutableBitmap;
- (void)removeAllIdentifiers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unionWithIdentifierSet:(id)a0;
- (void)removeIdentifier:(unsigned long long)a0;
- (id)copy;
- (void)addIdentifier:(unsigned long long)a0;
- (void)formSymmetricDifferenceWithIdentifierSet:(id)a0;
- (void)intersectWithIdentifierSet:(id)a0;
- (void)subtractIdentifierSet:(id)a0;

@end
