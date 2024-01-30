@interface TSDImageDataAttributes : TSPDataAttributes

@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) BOOL hasPixelSize;
@property (readonly, nonatomic) BOOL imageIsSRGB;
@property (readonly, nonatomic) BOOL hasImageIsSRGB;
@property (readonly, nonatomic) BOOL shouldBeInterpretedAsGenericIfUntagged;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)description;
- (id)initWithMessage:(const struct DataAttributes { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; } *)a0;
- (void)saveToMessage:(struct DataAttributes { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; } *)a0;
- (id)copyWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)a0;
- (id)initWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)a0;
- (id)copyWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithIsSRGB:(BOOL)a0;
- (id)copyWithIsSRGB:(BOOL)a0;

@end
