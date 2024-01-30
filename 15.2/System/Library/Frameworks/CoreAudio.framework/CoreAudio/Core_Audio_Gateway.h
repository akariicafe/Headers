@class NSXPCListener, NSXPCListenerEndpoint, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface Core_Audio_Gateway : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) struct shared_ptr<HAL::Client::Object_ID_Map> { struct Object_ID_Map *__ptr_; struct __shared_weak_count *__cntrl_; } clientObjectMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *io_queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithObjectMap:(struct shared_ptr<HAL::Client::Object_ID_Map> { struct Object_ID_Map *x0; struct __shared_weak_count *x1; })a0;
- (void)handle_server_disconnected;
- (BOOL)has_endpoint;
- (void)create_endpoint;
- (void)handle_server_reconnected;
- (void)destroy_endpoint;

@end
