@class NSString, Core_Audio_Driver, NSXPCConnection;

@interface Core_Audio_Driver_Host_Proxy : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCConnection *connection_to_host;
@property (readonly, nonatomic) struct shared_ptr<Host_Interface> { struct Host_Interface *__ptr_; struct __shared_weak_count *__cntrl_; } host_interface;
@property (readonly, nonatomic) struct shared_ptr<caulk::mach::unfair_lock> { struct unfair_lock *__ptr_; struct __shared_weak_count *__cntrl_; } driver_storage_lock;
@property (nonatomic) struct DictionaryRef { struct ObjectRef<const __CFDictionary *> { struct __CFDictionary *mCFObject; } mObject; } driver_storage;
@property (retain, nonatomic) Core_Audio_Driver *driver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init_with_host_endpoint:(id)a0 driver:(id)a1;
- (struct PropertyListRef { struct ObjectRef<const void *> { void *x0; } x0; })copy_from_driver_storage:(struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *x0; } x0; })a0;
- (int)delete_from_driver_storage:(struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *x0; } x0; })a0;
- (int)driver_properties_changed:(unsigned int)a0 properties_data:(id)a1;
- (int)driver_request_config_change:(unsigned int)a0 change_action:(unsigned long long)a1 change_info:(void *)a2;
- (struct AudioServerPlugInHostInterface { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)get_host_interface;
- (int)write_to_driver_storage:(struct StringRef { struct ObjectRef<const __CFString *> { struct __CFString *x0; } x0; })a0 property_list:(struct PropertyListRef { struct ObjectRef<const void *> { void *x0; } x0; })a1;

@end
