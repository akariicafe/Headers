@class geo_isolater;

@interface GEOAltitudeManifestReserved : NSObject {
    struct map<unsigned int, _GEOAltitudeTriggerData, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, _GEOAltitudeTriggerData> > > { struct __tree<std::__1::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _GEOAltitudeTriggerData> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, _GEOAltitudeTriggerData>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _GEOAltitudeTriggerData>, std::__1::less<unsigned int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _reservedTriggerData;
    unsigned int _reservedCurrentRegion;
    unsigned char _reservedTourServerType;
    geo_isolater *_reservedIsolater;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
