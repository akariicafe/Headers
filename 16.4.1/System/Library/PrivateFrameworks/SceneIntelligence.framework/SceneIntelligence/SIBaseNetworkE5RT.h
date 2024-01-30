@class NSString, SINetworkConfiguration, NSArray;

@interface SIBaseNetworkE5RT : NSObject <SINetworkProtocol> {
    struct e5rt_execution_stream_operation { } *_enabled_e5rt_operation;
    struct e5rt_execution_stream { } *_stream;
    struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { struct __hash_node_base<std::__hash_node<std::string, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<std::string>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<std::string>> { float __value_; } __p3_; } __table_; } _e5rt_operation_names;
    struct unordered_map<std::string, SIE5RTPort *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, SIE5RTPort *>>> { struct __hash_table<std::__hash_value_type<std::string, SIE5RTPort *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, SIE5RTPort *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::equal_to<std::string>, std::hash<std::string>, true>> { float __value_; } __p3_; } __table_; } _inputs;
    struct unordered_map<std::string, SIE5RTPort *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, SIE5RTPort *>>> { struct __hash_table<std::__hash_value_type<std::string, SIE5RTPort *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, SIE5RTPort *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, SIE5RTPort *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, SIE5RTPort *>, std::equal_to<std::string>, std::hash<std::string>, true>> { float __value_; } __p3_; } __table_; } _outputs;
    struct unordered_map<std::string, float, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, float>>> { struct __hash_table<std::__hash_value_type<std::string, float>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, float>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, float>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, float>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, float>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, float>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, float>, std::equal_to<std::string>, std::hash<std::string>, true>> { float __value_; } __p3_; } __table_; } _quantizationRatios;
    NSString *_e5Path;
    NSString *_network_name;
    NSString *_networkVersion;
    NSString *_enabled_e5rt_operation_name;
    SINetworkConfiguration *_configuration;
    NSArray *_opsForLibrary;
    BOOL _isPrepared;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)dealloc;
- (BOOL)prepare;
- (void).cxx_destruct;
- (id)networkVersion;
- (unsigned long long)getInputLength:(id)a0;
- (unsigned long long)getOutputWidth:(id)a0;
- (void)setOutputBlob:(id)a0 forOutputSurface:(struct __IOSurface { } *)a1;
- (unsigned long long)getInputHeight:(id)a0;
- (void /* unknown type, empty encoding */)getOutputShape:(id)a0;
- (void)_setupMetaDataFromLibrary;
- (id)createE5RTException;
- (unsigned long long)getInputChannels:(id)a0;
- (void *)getInputPtr:(id)a0;
- (unsigned long long)getInputWidth:(id)a0;
- (id)getOpsForLibrary;
- (unsigned long long)getOutputBatchNum:(id)a0;
- (unsigned long long)getOutputChannels:(id)a0;
- (unsigned long long)getOutputHeight:(id)a0;
- (unsigned long long)getOutputLength:(id)a0;
- (unsigned long long)getOutputRowElements:(id)a0;
- (void *)getRawOutput:(id)a0;
- (id)initWithNetName:(id)a0;
- (id)initWithNetPath:(id)a0;
- (id)initWithNetworkConfiguration:(id)a0;
- (BOOL)outputExists:(id)a0;
- (BOOL)runNetwork;
- (void)setInput:(id)a0 fromCVPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)setInput:(id)a0 fromRawPointer:(const void *)a1;
- (BOOL)supportFloat16IO;
- (BOOL)supportZeroCopyOutput;
- (BOOL)switchConfiguration:(id)a0;

@end
