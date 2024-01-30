@protocol LSOpenStagingDirectoryManagerIOPersonality;

@interface LSOpenStagingDirectoryManager : NSObject {
    struct unfair_lock_mutex { unsigned int _os_unfair_lock_opaque; } _mutex;
    struct unordered_map<unsigned long long, LaunchServices::StagingDirectoryInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, LaunchServices::StagingDirectoryInfo>>> { struct __hash_table<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, LaunchServices::StagingDirectoryInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> { float __value_; } __p3_; } __table_; } _stagingDirectoryInfoMap;
    id<LSOpenStagingDirectoryManagerIOPersonality> _ioPersonality;
    unsigned long long _personaGeneration;
    struct optional<unsigned long long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _mainStagingDirectoryKey;
}

+ (id)sharedServerInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_locked_stagingDirectoryForKey:(unsigned long long)a0;
- (void)_locked_updatePersonaStagingDirectories;
- (id)_stagingDirectoryForKeyRefreshingIfNecessary:(unsigned long long)a0;
- (id)initWithIOPersonality:(id)a0;
- (id)mainDataVolumeStagingURLWithError:(id *)a0;
- (id)stagingDirectoryForCloningFileHandle:(id)a0 error:(id *)a1;
- (id)stagingDirectoryForCloningURL:(id)a0 error:(id *)a1;

@end
