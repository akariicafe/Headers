@class TSPDataMetadataMap, NSHashTable;

@interface TSPPasteboardMetadata : TSPObject {
    struct PasteboardMetadata { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArena { void *ptr_; } _internal_metadata_; struct HasBits<1> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; union Pointer { struct Arena *arena; struct Rep *rep; } ptr_; } version_; int _version_cached_byte_size_; struct RepeatedPtrField<TSP::DataInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } datas_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; union Pointer { struct Arena *arena; struct Rep *rep; } ptr_; } read_version_; int _read_version_cached_byte_size_; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *ptr_; } app_name_; struct UUID *source_document_uuid_; struct Reference *data_metadata_map_; } _message;
    TSPDataMetadataMap *_identifierToDataMetadataMap;
}

@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (readonly, nonatomic) NSHashTable *dataReferences;

+ (id)bundleIdentifier;
+ (id)appNameAndVersion;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct PasteboardMetadata { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; struct RepeatedPtrField<TSP::DataInfo> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x7; int x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct UUID *x10; struct Reference *x11; } *)message;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)dataMetadataForDataIdentifier:(long long)a0;
- (void)setDataMetadata:(id)a0 forDataIdentifier:(long long)a1;
- (id)initWithContext:(id)a0 dataReferences:(id)a1;

@end
