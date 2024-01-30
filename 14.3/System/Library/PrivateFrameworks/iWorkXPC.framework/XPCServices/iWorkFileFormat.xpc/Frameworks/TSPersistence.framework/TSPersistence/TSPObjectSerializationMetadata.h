@class NSArray, TSPDataMetadataMap;

@interface TSPObjectSerializationMetadata : TSPObject {
    struct ObjectSerializationMetadata { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArena { void *ptr_; } _internal_metadata_; struct HasBits<1> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; union Pointer { struct Arena *arena; struct Rep *rep; } ptr_; } version_; int _version_cached_byte_size_; struct RepeatedPtrField<TSP::DataInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } datas_; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } external_object_uuid_map_entries_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; union Pointer { struct Arena *arena; struct Rep *rep; } ptr_; } read_version_; int _read_version_cached_byte_size_; struct UUID *source_document_uuid_; struct UUID *version_uuid_; struct ComponentInfo *component_; struct Reference *data_metadata_map_; } _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}

@property (copy, nonatomic) NSArray *dataReferences;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ObjectSerializationMetadata { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; struct RepeatedPtrField<TSP::DataInfo> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x8; int x9; struct UUID *x10; struct UUID *x11; struct ComponentInfo *x12; struct Reference *x13; } *)message;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)dataMetadataForDataIdentifier:(long long)a0;
- (void)setDataMetadata:(id)a0 forDataIdentifier:(long long)a1;

@end
