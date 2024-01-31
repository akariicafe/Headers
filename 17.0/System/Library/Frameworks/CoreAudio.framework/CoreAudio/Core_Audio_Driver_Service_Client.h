@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_object, Core_Audio_Driver_Service_Client_Callback_Delegate, OS_dispatch_semaphore;

@interface Core_Audio_Driver_Service_Client : NSObject <NSXPCListenerDelegate, Core_Audio_Driver_Service_Client_Protocol>

@property (retain, nonatomic) NSXPCConnection *connection_to_driver_service;
@property (retain, nonatomic) NSXPCConnection *connection_from_driver_service;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) struct Dispatch_Queue { struct object { NSObject<OS_dispatch_object> *fObj; } fObj; struct weak_ptr<AMCP::Utility::Dispatch_Queue> { struct Dispatch_Queue *__ptr_; struct __shared_weak_count *__cntrl_; } __weak_this_; struct Workloop { struct object { NSObject<OS_dispatch_object> *fObj; } fObj; } m_workloop; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } m_flush_started; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } m_something_dispatched_after_flush; struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source *__begin_; struct Event_Source *__end_; struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source *__value_; } __end_cap_; } m_port_death_list; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_port_death_list_mutex; struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source *__begin_; struct Event_Source *__end_; struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source *__value_; } __end_cap_; } m_mach_port_receiver_list; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_mach_port_receiver_list_mutex; struct vector<AMCP::Utility::Dispatch_Queue::Event_Source, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source *__begin_; struct Event_Source *__end_; struct __compressed_pair<AMCP::Utility::Dispatch_Queue::Event_Source *, std::allocator<AMCP::Utility::Dispatch_Queue::Event_Source>> { struct Event_Source *__value_; } __end_cap_; } m_mig_server_list; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_mig_server_list_mutex; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { _Atomic long long __a_value; } __a_; } m_after_count; NSObject<OS_dispatch_semaphore> *m_after_count_semaphore; } queue;
@property (retain, nonatomic) id<Core_Audio_Driver_Service_Client_Callback_Delegate> delegate;
@property (nonatomic) struct shared_ptr<std::function<void (std::shared_ptr<Driver_File>)>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } driver_service_undertaker;
@property (nonatomic) struct shared_ptr<Driver_File> { struct Driver_File *__ptr_; struct __shared_weak_count *__cntrl_; } driver_file;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)get_driver_name_list:(int)a0;

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)send_endpoint_to_driver_service;
- (void)connect_to_driver_service:(struct shared_ptr<Driver_File> { struct Driver_File *x0; struct __shared_weak_count *x1; })a0;
- (void)deferred_driver_loaded:(id)a0 reply:(id /* block */)a1;
- (id)get_lazy_connection:(struct shared_ptr<Driver_File> { struct Driver_File *x0; struct __shared_weak_count *x1; })a0;
- (id)init_with_driver_service_undertaker:(struct shared_ptr<std::function<void (std::shared_ptr<Driver_File>)>> { void *x0; struct __shared_weak_count *x1; })a0;
- (int)load_driver:(struct shared_ptr<Driver_File> { struct Driver_File *x0; struct __shared_weak_count *x1; })a0 driver_endpoint:(id *)a1;
- (void)teardown_connection;
- (void)tell_driver_service_to_exit;

@end
