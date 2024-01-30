@interface TSTColumnAggregate : TSKSosBase <NSCopying>

@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char _uuid[16]; struct { unsigned char byte0; unsigned char byte1; unsigned char byte2; unsigned char byte3; unsigned char byte4; unsigned char byte5; unsigned char byte6; unsigned char byte7; unsigned char byte8; unsigned char byte9; unsigned char byte10; unsigned char byte11; unsigned char byte12; unsigned char byte13; unsigned char byte14; unsigned char byte15; } _cfuuid; struct { unsigned long long _lower; unsigned long long _upper; } ; } ; } columnUid;
@property (readonly, nonatomic) int level;
@property (nonatomic) unsigned char aggregateType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct ColumnAggregateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UUID *x4; unsigned int x5; int x6; } *)a0;
- (id)description;
- (id).cxx_construct;
- (void)encodeToArchive:(struct ColumnAggregateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UUID *x4; unsigned int x5; int x6; } *)a0 archiver:(id)a1;
- (id)initWithColumnUid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0 level:(int)a1 aggregateType:(unsigned char)a2;

@end
