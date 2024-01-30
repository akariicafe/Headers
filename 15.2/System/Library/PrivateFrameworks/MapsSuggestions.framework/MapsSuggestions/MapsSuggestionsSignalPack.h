@interface MapsSuggestionsSignalPack : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct SignalPack { struct unordered_map<MapsSuggestionsSignalType, MSg::Signal, std::hash<MapsSuggestionsSignalType>, std::equal_to<MapsSuggestionsSignalType>, std::allocator<std::pair<const MapsSuggestionsSignalType, MSg::Signal>>> { struct __hash_table<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__unordered_map_hasher<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::hash<MapsSuggestionsSignalType>, std::equal_to<MapsSuggestionsSignalType>, true>, std::__unordered_map_equal<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::equal_to<MapsSuggestionsSignalType>, std::hash<MapsSuggestionsSignalType>, true>, std::allocator<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::hash<MapsSuggestionsSignalType>, std::equal_to<MapsSuggestionsSignalType>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::equal_to<MapsSuggestionsSignalType>, std::hash<MapsSuggestionsSignalType>, true>> { float __value_; } __p3_; } __table_; } dict_; } _innerSignalPack;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)extractFromDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)extractFromDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)signalPackFromData:(id)a0;

- (BOOL)mergeIntoSignalPack:(id)a0;
- (BOOL)hasType:(long long)a0;
- (id)initWithSignalPack:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (float)valueForSignalType:(long long)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)encodedFeatureDictionary;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)copy;
- (id).cxx_construct;
- (id)data;

@end
