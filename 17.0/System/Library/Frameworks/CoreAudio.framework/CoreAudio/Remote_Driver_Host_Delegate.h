@class NSString;

@interface Remote_Driver_Host_Delegate : NSObject <Core_Audio_Driver_Host_Callback_Delegate>

@property (nonatomic) void *remote_plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)object_properties_changed:(unsigned int)a0 data:(id)a1;
- (struct pair<int, const void *> { int x0; void *x1; })copy_storage_settings:(struct __CFString { } *)a0;
- (int)delete_storage_settings:(struct __CFString { } *)a0;
- (id)init_with_remote_plugin:(void *)a0;
- (void)request_config_change:(unsigned int)a0 change_action:(unsigned long long)a1 change_token:(unsigned long long)a2;
- (int)write_storage_settings:(struct __CFString { } *)a0 storage_data:(void *)a1;

@end
