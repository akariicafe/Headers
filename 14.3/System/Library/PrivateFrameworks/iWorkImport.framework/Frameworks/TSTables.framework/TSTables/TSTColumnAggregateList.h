@class NSArray;

@interface TSTColumnAggregateList : TSKSosBase <NSCopying> {
    NSArray *_columnAggregates;
}

@property (readonly, nonatomic) NSArray *asArray;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct ColumnAggregateListArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::ColumnAggregateArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0;
- (id)description;
- (void)encodeToArchive:(struct ColumnAggregateListArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TST::ColumnAggregateArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 archiver:(id)a1;
- (id)initWithColumnAggregates:(id)a0;
- (id)aggregatesOnLevel:(unsigned char)a0;

@end
