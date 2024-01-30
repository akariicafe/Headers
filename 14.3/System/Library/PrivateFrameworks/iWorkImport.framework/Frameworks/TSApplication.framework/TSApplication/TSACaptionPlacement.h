@interface TSACaptionPlacement : TSPObject

@property (nonatomic) long long captionAnchorLocation;
@property (nonatomic) long long drawableAnchorLocation;

+ (BOOL)needsObjectUUID;

- (id)copyWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)saveToMessage:(struct CaptionPlacementArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; int x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isEqualToCaptionPlacement:(id)a0;
- (void)loadFromMessage:(const struct CaptionPlacementArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; int x4; int x5; } *)a0 unarchiver:(id)a1;
- (id)initWithContext:(id)a0 drawableAnchorLocation:(long long)a1 captionAnchorLocation:(long long)a2;

@end
