@interface MapsSuggestionsSignalPack : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct SignalPack { struct unordered_map<MapsSuggestionsSignalType, MSg::Signal, std::__1::hash<MapsSuggestionsSignalType>, std::__1::equal_to<MapsSuggestionsSignalType>, std::__1::allocator<std::__1::pair<const MapsSuggestionsSignalType, MSg::Signal> > > { struct __hash_table<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true>, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true>, std::__1::allocator<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true> > { float __value_; } __p3_; } __table_; } dict_; } _innerSignalPack;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)extractFromDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)signalPackFromData:(id)a0;
+ (id)extractFromDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;

- (id)initWithSignalPack:(id)a0;
- (BOOL)isEmpty;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (BOOL)hasType:(long long)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id).cxx_construct;
- (id)encodedFeatureDictionary;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (BOOL)mergeIntoSignalPack:(id)a0;
- (float)valueForSignalType:(long long)a0;

@end
