@class NSIndexSet, NSArray;

@interface KGElementIdentifierSet : NSObject {
    struct Bitmap { unsigned long long _bitCount; unsigned long long _lastOffsetFoundAt; struct vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *__begin_; struct BitsetPtr *__end_; struct __compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *__value_; } __end_cap_; } _bitSets; BOOL _dirty; } _bitmap;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSIndexSet *indexSet;
@property (readonly, copy, nonatomic) NSArray *indexArray;
@property (readonly, nonatomic) unsigned long long firstElement;

- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (BOOL)containsIdentifier:(unsigned long long)a0;
- (id)copy;
- (id)initWithIndexSet:(id)a0;
- (unsigned long long)hash;
- (const struct Bitmap { unsigned long long x0; unsigned long long x1; struct vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *x0; struct BitsetPtr *x1; struct __compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *x0; } x2; } x2; BOOL x3; } *)bitmap;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)initWithElementIdentifier:(unsigned long long)a0;
- (id)initWithIndexArray:(id)a0;
- (id)initWithBitmap:(const struct Bitmap { unsigned long long x0; unsigned long long x1; struct vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *x0; struct BitsetPtr *x1; struct __compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *x0; } x2; } x2; BOOL x3; } *)a0;
- (struct Bitmap { unsigned long long x0; unsigned long long x1; struct vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *x0; struct BitsetPtr *x1; struct __compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr *x0; } x2; } x2; BOOL x3; } *)mutableBitmap;
- (unsigned long long)elementAtOffset:(unsigned long long)a0;
- (unsigned long long)randomElement;
- (id)extractRangeByIndex:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)identifierSetByAddingIdentifier:(unsigned long long)a0;
- (id)identifierSetByRemovingIdentifier:(unsigned long long)a0;
- (id)identifierSetByFormingUnion:(id)a0;
- (id)identifierSetByIntersectingIdentifierSet:(id)a0;
- (id)identifierSetBySubtractingIdentifierSet:(id)a0;
- (void)enumerateIdentifiersWithBlock:(id /* block */)a0;
- (BOOL)isEqualToElementIdentifierSet:(id)a0;

@end
