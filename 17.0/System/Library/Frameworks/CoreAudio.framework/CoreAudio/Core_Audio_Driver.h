@class NSXPCListener, Core_Audio_Driver_Host_Proxy, NSXPCListenerEndpoint, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface Core_Audio_Driver : NSObject <NSXPCListenerDelegate, Core_Audio_Driver_Protocol>

@property (retain, nonatomic) Core_Audio_Driver_Host_Proxy *driver_host_proxy;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) struct AudioServerPlugInDriverInterface **asp_interface;
@property (nonatomic) struct AudioServerPlugInHostInterface { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *host_interface;
@property (readonly, nonatomic) struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock *__ptr_; struct __shared_weak_count *__cntrl_; } config_change_info_lock;
@property (nonatomic) struct shared_ptr<std::map<unsigned long long, void *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } config_change_info_map;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrent_queue;
@property (nonatomic) struct shared_ptr<Property_Type_Info> { struct Property_Type_Info *__ptr_; struct __shared_weak_count *__cntrl_; } m_property_type_info;
@property (copy, nonatomic) id /* block */ process_boost_reply;
@property (nonatomic) struct shared_ptr<std::unordered_map<AMCP::Portal::IPC::io_messenger_id_t, std::shared_ptr<AMCP::Portal::IPC::IO_Receiver>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } io_receivers;
@property (nonatomic) struct shared_ptr<std::vector<std::pair<AMCP::Portal::IPC::shared_buffer_info_t, applesauce::xpc::dict>>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } io_buffer_list;
@property (nonatomic) struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock *__ptr_; struct __shared_weak_count *__cntrl_; } io_receiver_lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void)initialize:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)retain_reply_for_process_boost:(id /* block */)a0;
- (void)abort_device_configuration_change:(unsigned int)a0 action:(unsigned long long)a1 change:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)add_device_client:(unsigned int)a0 client_info:(id)a1 reply:(id /* block */)a2;
- (int)create_and_start_io_receiver:(unsigned int)a0 client_id:(unsigned int)a1 nominal_sample_rate:(double)a2 io_buffer_frame_size:(unsigned int)a3 work_group_port:(id)a4 io_messenger:(id)a5;
- (void)create_device:(id)a0 client_info:(id)a1 reply:(id /* block */)a2;
- (void)destroy_device:(unsigned int)a0 reply:(id /* block */)a1;
- (int)destroy_io_receiver:(unsigned int)a0;
- (int)destroy_io_receiver:(unsigned int)a0 client_id:(unsigned int)a1;
- (void)get_property_data:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 qualifier:(id)a1 data_size:(unsigned int)a2 reply:(id /* block */)a3;
- (void)get_property_data_size:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 qualifier:(id)a1 reply:(id /* block */)a2;
- (int)handle_register_buffer:(struct dict { struct object { id x0; } x0; })a0;
- (int)handle_unregister_buffer:(struct dict { struct object { id x0; } x0; })a0;
- (void)has_property:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 reply:(id /* block */)a1;
- (id)init_driver_interface:(struct AudioServerPlugInDriverInterface **)a0;
- (void)is_property_settable:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 reply:(id /* block */)a1;
- (void)object_was_destroyed:(unsigned int)a0 reply:(id /* block */)a1;
- (void)perform_device_configuration_change:(unsigned int)a0 action:(unsigned long long)a1 change:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)register_io_buffer:(id)a0 reply:(id /* block */)a1;
- (void)release_unpacked_cf_objects:(unsigned int)a0 qualifier_data:(id)a1 data_type:(unsigned int)a2 data:(id)a3;
- (void)remove_device_client:(unsigned int)a0 client_info:(id)a1 reply:(id /* block */)a2;
- (void)set_property_data:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 qualifier:(id)a1 data:(id)a2 reply:(id /* block */)a3;
- (void)start_io:(unsigned int)a0 client_id:(unsigned int)a1 reply:(id /* block */)a2;
- (void)start_synchronous_messenger:(unsigned int)a0 client_id:(unsigned int)a1 nominal_sample_rate:(double)a2 io_buffer_frame_size:(unsigned int)a3 work_group_port:(id)a4 io_messenger:(id)a5 reply:(id /* block */)a6;
- (void)stop_io:(unsigned int)a0 client_id:(unsigned int)a1 reply:(id /* block */)a2;
- (void)stop_synchronous_messenger:(unsigned int)a0 client_id:(unsigned int)a1 reply:(id /* block */)a2;
- (void)store_change_info:(void *)a0 for_token:(unsigned long long)a1;
- (struct tuple<NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> { id x0; unsigned int x1; unsigned int x2; } x0; })unpack_data_from_qualifier:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 qualifier:(id)a1;
- (struct tuple<NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, NSData *, unsigned int, AMCP::HAL::HAL_Property_Type_Code> { id x0; unsigned int x1; unsigned int x2; } x0; })unpack_data_from_value:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 value:(id)a1;
- (void)unregister_io_buffer:(id)a0 reply:(id /* block */)a1;

@end
