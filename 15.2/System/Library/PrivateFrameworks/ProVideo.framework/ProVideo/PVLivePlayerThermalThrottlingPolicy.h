@interface PVLivePlayerThermalThrottlingPolicy : NSObject {
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_lock;
    struct map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::less<PVSPI_OSThermalPressureLevel>, std::allocator<std::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> { struct __tree<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>, true>, std::allocator<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _policy;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)setThermalLevel:(int)a0 controlParameters:(id)a1;
- (id)populatedControlParametersForCurrentThermalLevel;
- (id)populatedControlParametersForThermalLevel:(int)a0;
- (id)controlParametersForThermalLevel:(int)a0;

@end
