@class NSArray, TSPDataMetadataMap;

@interface TSPObjectSerializationMetadata : TSPObject {
    struct ObjectSerializationMetadata { void /* function */ **_vptr$MessageLite; struct InternalMetadata { void *ptr_; } _internal_metadata_; struct HasBits<1> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _version_cached_byte_size_; struct RepeatedPtrField<TSP::DataInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } datas_; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } external_object_uuid_map_entries_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } read_version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _read_version_cached_byte_size_; struct UUID *source_document_uuid_; struct UUID *version_uuid_; struct ComponentInfo *component_; struct Reference *data_metadata_map_; } _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}

@property (copy, nonatomic) NSArray *dataReferences;

- (void *)message;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)dataMetadataForDataIdentifier:(long long)a0;
- (void)setDataMetadata:(id)a0 forDataIdentifier:(long long)a1;

@end
