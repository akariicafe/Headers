@interface KGMutableElementIdentifierSet : KGElementIdentifierSet

- (id)copy;
- (void)addIdentifier:(unsigned long long)a0;
- (void)removeAllIdentifiers;
- (void)removeIdentifier:(unsigned long long)a0;
- (struct Bitmap { unsigned long long x0; unsigned long long x1; struct vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *x0; struct BitsetPtr *x1; struct __compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *x0; } x2; } x2; BOOL x3; } *)mutableBitmap;
- (void)unionWithIdentifierSet:(id)a0;
- (void)intersectWithIdentifierSet:(id)a0;
- (void)subtractIdentifierSet:(id)a0;

@end
