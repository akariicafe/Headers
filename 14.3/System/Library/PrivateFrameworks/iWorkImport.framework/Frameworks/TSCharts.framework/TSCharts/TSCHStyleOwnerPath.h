@class NSArray;

@interface TSCHStyleOwnerPath : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *uuids;

+ (id)instanceWithArchive:(const struct StyleOwnerPath { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 unarchiver:(id)a1;
+ (id)verifiedUUIDs:(id)a0;
+ (id)styleOwnerPathWithUUIDs:(id)a0;
+ (id)styleOwnerPathForStyleOwner:(id)a0;
+ (unsigned char)styleOwnerPathTypeForStyleOwner:(id)a0;
+ (id)styleOwnerPathForSemanticTag:(id)a0 ofChart:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUIDs:(id)a0;
- (id)initWithArchive:(const struct StyleOwnerPath { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(struct StyleOwnerPath { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 archiver:(id)a1;
- (id)TSUUUIDPath;
- (id)pathByPrefixingWithUUIDs:(id)a0;
- (Class)genericPropertyMapClass;
- (unsigned char)styleOwnerPathType;
- (int)styleOwnerType;
- (id)p_createUUIDDecoder;
- (id)p_axisStyleOwnerForChart:(id)a0;
- (id)p_seriesStyleOwnerForChart:(id)a0;
- (id)p_referenceLineStyleOwnerForChart:(id)a0;
- (id)styleOwnerForChart:(id)a0;

@end
