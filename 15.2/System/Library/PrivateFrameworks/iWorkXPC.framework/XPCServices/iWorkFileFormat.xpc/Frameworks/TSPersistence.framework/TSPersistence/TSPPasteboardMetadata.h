@class TSPDataMetadataMap, NSHashTable;

@interface TSPPasteboardMetadata : TSPObject {
    struct PasteboardMetadata { void /* function */ **_vptr$MessageLite; struct InternalMetadata { void *ptr_; } _internal_metadata_; struct HasBits<1> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _version_cached_byte_size_; struct RepeatedPtrField<TSP::DataInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } datas_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } read_version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _read_version_cached_byte_size_; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *ptr_; } tagged_ptr_; } app_name_; struct UUID *source_document_uuid_; struct Reference *data_metadata_map_; } _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}

@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) NSHashTable *dataReferences;

+ (id)bundleIdentifier;
+ (id)appNameAndVersion;

- (void *)message;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)dataMetadataForDataIdentifier:(long long)a0;
- (void)setDataMetadata:(id)a0 forDataIdentifier:(long long)a1;
- (id)initWithContext:(id)a0 dataReferences:(id)a1;

@end
