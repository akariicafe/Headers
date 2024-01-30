@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol> {
    struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > > { struct __tree<std::__1::__value_type<unsigned long, int>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _clients;
}

@property (readonly, nonatomic) struct CLNotifierBase { void /* function */ **x0; } *notifier;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forget:(byref id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)unregister:(byref id)a0 forNotification:(int)a1;
- (void)setAdaptedNotifier:(struct CLNotifierBase { void /* function */ **x0; } *)a0;
- (id).cxx_construct;
- (int)notifierClientNumForCoparty:(id)a0;
- (void)register:(byref id)a0 forNotification:(int)a1 registrationInfo:(id)a2;
- (void)invalidate;

@end
