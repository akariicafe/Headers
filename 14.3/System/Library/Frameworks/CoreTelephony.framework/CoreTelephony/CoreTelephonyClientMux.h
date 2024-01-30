@class NSXPCListenerEndpoint, NSSet, NSXPCConnection, MuxNotificationSink, NSError;

@interface CoreTelephonyClientMux : NSObject <MuxNotificationSinkDelegate> {
    struct map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::__1::less<__unsafe_unretained id>, std::__1::allocator<std::__1::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext> > > { struct __tree<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::__map_value_compare<__unsafe_unretained id, std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::less<__unsafe_unretained id>, true>, std::__1::allocator<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<__unsafe_unretained id, std::__1::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__1::less<__unsafe_unretained id>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _delegates;
    NSSet *_currentSelectorSet;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } xpcQueue;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) MuxNotificationSink *notificationSink;
@property (retain, nonatomic) NSError *reconnectError;

- (void)addDelegate:(id)a0 queue:(struct queue { struct object { struct dispatch_object_s *x0; } x0; })a1;
- (void)removeDelegate:(id)a0;
- (void)_ensureConnectionSetup_sync:(BOOL)a0;
- (id)init;
- (id)proxyWithErrorHandler_sync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithSink:(id)a0;
- (id)synchronousProxyWithErrorHandler:(id /* block */)a0;
- (void)_ensureConnectionSetup_sync;
- (void)dealloc;
- (void)_initializeConnection_sync;
- (void)_computeNotificationSetForced_sync;
- (id)initWithEndpoint:(id)a0 sink:(id)a1;
- (void)_connect_sync;
- (id).cxx_construct;
- (void)_computeNotificationSetForced_sync:(id /* block */)a0;
- (void)_registerForNotifications_sync:(id)a0 shouldForce:(BOOL)a1 completion:(id /* block */)a2;
- (id)_connection;
- (void)_computeNotificationSet_sync:(BOOL)a0 completion:(id /* block */)a1;
- (id)proxyWithQueue:(struct queue { struct object { struct dispatch_object_s *x0; } x0; })a0 errorHandler:(id /* block */)a1;
- (void)_setReconnectError_sync:(id)a0;
- (void)_computeNotificationSet_sync:(id /* block */)a0;
- (void)sink:(id)a0 handleNotification:(id)a1;

@end
