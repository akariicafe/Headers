@class NSArray;

@interface TSTGroupValueTuple : TSKSosBase <NSCopying> {
    NSArray *_groupValues;
}

@property (readonly) unsigned char numberOfLevels;

- (id)locale;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithValues:(id)a0;
- (id)initWithValueArray:(id)a0;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_GroupValueTupleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::CellValueArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_GroupValueTupleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCE::CellValueArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 locale:(id)a1;
- (id)groupValueTupleByAppendingValue:(id)a0;
- (id)groupValueAtLevel:(unsigned char)a0;
- (void)updateWithDocumentRoot:(id)a0;
- (id)groupValueTupleByReplacingValue:(id)a0 atLevel:(unsigned char)a1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; })groupValueUid;
- (id)groupValueTupleByRemovingValueAtLevel:(unsigned char)a0;
- (id)groupValueTupleByPromotingValueAtLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (id)groupValueTupleByDemotingValueAtLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (id)prefixTupleToLevel:(unsigned char)a0;
- (id)groupValueTupleByMergingTuple:(id)a0 toLevel:(unsigned char)a1;

@end
