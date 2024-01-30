@class NSObject;
@protocol OS_dispatch_queue;

@interface Core_Audio_Property_Listener_Gateway : Core_Audio_Gateway <Core_Audio_Property_Listener>

@property (nonatomic) struct Listener_List { struct unique_ptr<HAL::Client::Listener_List::Listener_List_Impl, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct __compressed_pair<HAL::Client::Listener_List::Listener_List_Impl *, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct Listener_List_Impl *x0; } x0; } x0; } *list_ptr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notification_queue;
@property (readonly, nonatomic) struct Listener_List { struct unique_ptr<HAL::Client::Listener_List::Listener_List_Impl, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct __compressed_pair<HAL::Client::Listener_List::Listener_List_Impl *, std::__1::default_delete<HAL::Client::Listener_List::Listener_List_Impl> > { struct Listener_List_Impl *x0; } x0; } x0; } *list;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithObjectMap:(struct shared_ptr<HAL::Client::Object_ID_Map> { struct Object_ID_Map *x0; struct __shared_weak_count *x1; })a0;
- (void)synchronously_notify_listeners_of_object:(unsigned int)a0 about_changes_to_properties:(const struct vector<AudioObjectPropertyAddress, std::__1::allocator<AudioObjectPropertyAddress> > { struct AudioObjectPropertyAddress *x0; struct AudioObjectPropertyAddress *x1; struct __compressed_pair<AudioObjectPropertyAddress *, std::__1::allocator<AudioObjectPropertyAddress> > { struct AudioObjectPropertyAddress *x0; } x2; } *)a1;
- (void)handle_server_disconnected;
- (void)release_resources;
- (unsigned long long)add_listener_for_property_id:(struct Property_Identity { unsigned int x0; struct PropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x1; struct Device_Token { unsigned int x0; } x2; struct Server_Side_Client_Identity { int x0; } x3; })a0 with_listener_proc:(void /* function */ *)a1 and_user_data:(void *)a2;
- (void)remove_listener_for_property_id:(struct Property_Identity { unsigned int x0; struct PropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x1; struct Device_Token { unsigned int x0; } x2; struct Server_Side_Client_Identity { int x0; } x3; })a0 with_listener_proc:(void /* function */ *)a1 and_user_data:(void *)a2;
- (unsigned long long)add_listener_for_property_id:(struct Property_Identity { unsigned int x0; struct PropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x1; struct Device_Token { unsigned int x0; } x2; struct Server_Side_Client_Identity { int x0; } x3; })a0 with_listener_block:(id /* block */)a1 and_queue:(id)a2;
- (void)remove_listener_for_property_id:(struct Property_Identity { unsigned int x0; struct PropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x1; struct Device_Token { unsigned int x0; } x2; struct Server_Side_Client_Identity { int x0; } x3; })a0 with_listener_block:(id /* block */)a1 and_queue:(id)a2;
- (void)handle_server_reconnected;
- (void)notify_listeners_of_object:(unsigned int)a0 about_changes_to_properties:(const struct vector<AudioObjectPropertyAddress, std::__1::allocator<AudioObjectPropertyAddress> > { struct AudioObjectPropertyAddress *x0; struct AudioObjectPropertyAddress *x1; struct __compressed_pair<AudioObjectPropertyAddress *, std::__1::allocator<AudioObjectPropertyAddress> > { struct AudioObjectPropertyAddress *x0; } x2; } *)a1;
- (void)handle_property_changes:(id)a0;
- (void)handle_property_changes:(id)a0 reply:(id /* block */)a1;
- (void)remove_listener_with_token:(unsigned long long)a0;
- (void)remove_listeners_for_device_id:(unsigned int)a0;

@end
