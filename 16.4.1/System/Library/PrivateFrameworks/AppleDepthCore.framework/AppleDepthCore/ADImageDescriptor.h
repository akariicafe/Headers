@interface ADImageDescriptor : NSObject {
    struct unordered_map<ADLayout, CGSize, std::hash<ADLayout>, std::equal_to<ADLayout>, std::allocator<std::pair<const ADLayout, CGSize>>> { struct __hash_table<std::__hash_value_type<ADLayout, CGSize>, std::__unordered_map_hasher<ADLayout, std::__hash_value_type<ADLayout, CGSize>, std::hash<ADLayout>, std::equal_to<ADLayout>, true>, std::__unordered_map_equal<ADLayout, std::__hash_value_type<ADLayout, CGSize>, std::equal_to<ADLayout>, std::hash<ADLayout>, true>, std::allocator<std::__hash_value_type<ADLayout, CGSize>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<ADLayout, CGSize>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<ADLayout, std::__hash_value_type<ADLayout, CGSize>, std::hash<ADLayout>, std::equal_to<ADLayout>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<ADLayout, std::__hash_value_type<ADLayout, CGSize>, std::equal_to<ADLayout>, std::hash<ADLayout>, true>> { float __value_; } __p3_; } __table_; } _sizeForLayout;
}

@property (readonly, nonatomic) unsigned int pixelFormat;

+ (id)descriptorForSupportedSizes:(id)a0 pixelFormat:(unsigned int)a1;
+ (id)descriptorWithDefaultSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1;

- (id).cxx_construct;
- (struct CGSize { double x0; double x1; })sizeForLayout:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)layoutForSize:(struct CGSize { double x0; double x1; })a0;
- (id)cloneWithDifferentFormat:(unsigned int)a0;
- (BOOL)supportsLayout:(unsigned long long)a0;
- (id)initWithSupportedSizes:(id)a0 pixelFormat:(unsigned int)a1;

@end
