@interface PathCodec : NSObject

+ (struct RoutingPathLeg { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; struct HasBits<1UL> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x0; } x0; } x5; })decompress:(const void *)a0;
+ (struct RoutingPathLeg { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; struct HasBits<1UL> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x0; } x0; } x5; })compress:(const void *)a0;
+ (void)compressInPlace:(void *)a0;
+ (id)dataForRoutingPathLeg:(const void *)a0;
+ (void)decompressInPlace:(void *)a0;
+ (id)descriptionForRoutingPathLeg:(const void *)a0;
+ (struct RoutingPathLeg { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; struct HasBits<1UL> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x0; } x0; } x5; })routingPathLegForData:(id)a0;

@end
