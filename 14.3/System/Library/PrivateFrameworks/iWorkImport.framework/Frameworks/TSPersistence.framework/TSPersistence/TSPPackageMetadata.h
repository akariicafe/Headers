@class TSPDataMetadataMap;

@interface TSPPackageMetadata : TSPObject {
    struct PackageMetadata { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArena { void *ptr_; } _internal_metadata_; struct HasBits<1> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedPtrField<TSP::ComponentInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } components_; struct RepeatedPtrField<TSP::DataInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } datas_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; union Pointer { struct Arena *arena; struct Rep *rep; } ptr_; } read_version_; int _read_version_cached_byte_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; union Pointer { struct Arena *arena; struct Rep *rep; } ptr_; } write_version_; int _write_version_cached_byte_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; union Pointer { struct Arena *arena; struct Rep *rep; } ptr_; } file_format_version_; int _file_format_version_cached_byte_size_; struct RepeatedPtrField<TSP::ComponentInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } versioned_components_; struct DocumentRevision *revision_; struct Reference *data_metadata_map_; unsigned long long last_object_identifier_; unsigned long long save_token_; int preferred_package_type_; } _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct PackageMetadata { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::ComponentInfo> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::DataInfo> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; int x7; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x8; int x9; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x10; int x11; struct RepeatedPtrField<TSP::ComponentInfo> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x12; struct DocumentRevision *x13; struct Reference *x14; unsigned long long x15; unsigned long long x16; int x17; } *)message;
- (id)packageLocator;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)dataMetadataForDataIdentifier:(long long)a0;
- (void)setDataMetadata:(id)a0 forDataIdentifier:(long long)a1;

@end
