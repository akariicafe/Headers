@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol> {
    struct map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, int>>> { struct __tree<std::__value_type<unsigned long, int>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _clients;
}

@property (readonly, nonatomic) struct CLNotifierBase { void /* function */ **x0; } *notifier;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAdaptedNotifier:(struct CLNotifierBase { void /* function */ **x0; } *)a0;
- (id).cxx_construct;
- (void)forget:(byref id)a0;
- (void)unregister:(byref id)a0 forNotification:(int)a1;
- (void)register:(byref id)a0 forNotification:(int)a1 registrationInfo:(id)a2;
- (id)init;
- (int)notifierClientNumForCoparty:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
