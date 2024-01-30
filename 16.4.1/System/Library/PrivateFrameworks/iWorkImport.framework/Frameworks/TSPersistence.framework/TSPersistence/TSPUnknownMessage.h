@class NSString, NSArray, TSPLazyReferenceArray, NSObject;
@protocol OS_dispatch_data;

@interface TSPUnknownMessage : NSObject <TSPArchivableContent> {
    struct MessageInfo { void /* function */ **_vptr$MessageLite; struct InternalMetadata { void *ptr_; } _internal_metadata_; struct HasBits<1UL> { unsigned int has_bits_[1]; } _has_bits_; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } size_; } _cached_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _version_cached_byte_size_; struct RepeatedPtrField<TSP::FieldInfo> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } field_infos_; struct RepeatedField<unsigned long long> { int current_size_; int total_size_; void *arena_or_elements_; } object_references_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _object_references_cached_byte_size_; struct RepeatedField<unsigned long long> { int current_size_; int total_size_; void *arena_or_elements_; } data_references_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _data_references_cached_byte_size_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } diff_merge_version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _diff_merge_version_cached_byte_size_; struct RepeatedPtrField<TSP::FieldPath> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } fields_to_remove_; struct RepeatedField<unsigned int> { int current_size_; int total_size_; void *arena_or_elements_; } diff_read_version_; struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _diff_read_version_cached_byte_size_; struct FieldPath *diff_field_path_; unsigned int type_; unsigned int length_; unsigned int base_message_index_; } _messageInfo;
}

@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly, nonatomic) BOOL isDiff;
@property (readonly, nonatomic) unsigned long long messageVersion;
@property (readonly, nonatomic) const void *fieldPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *messageData;
@property (retain, nonatomic) TSPLazyReferenceArray *objects;
@property (retain, nonatomic) NSArray *allData;

- (id).cxx_construct;
- (id)init;
- (const void *)messageInfo;
- (void).cxx_destruct;
- (id)initWithMessageInfo:(const void *)a0 data:(id)a1;

@end
