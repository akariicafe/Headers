@class NSUUID;

@interface KNBuildChunkIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *buildUUID;
@property (readonly, nonatomic) int chunkID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)emptyIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessage:(const struct BuildChunkIdentifierArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UUID *x4; int x5; } *)a0;
- (id)resolveToChunkOnSlide:(id)a0;
- (id)initWithBuild:(id)a0 chunkID:(int)a1;
- (void)saveToMessage:(struct BuildChunkIdentifierArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UUID *x4; int x5; } *)a0;
- (id)resolveToChunkUsingContext:(id)a0;
- (id)initEmptyIdentifier;

@end
