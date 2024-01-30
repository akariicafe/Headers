@interface Core_Audio_IO_Gateway : Core_Audio_Gateway <Core_Audio_IO>

@property (nonatomic) struct shared_ptr<Client_Side_IO_Gateway> { struct Client_Side_IO_Gateway *__ptr_; struct __shared_weak_count *__cntrl_; } client_gateway;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)handle_server_disconnected;
- (void)handle_io_message:(struct Device_Token { unsigned int x0; })a0 with:(id)a1 reply:(id /* block */)a2;
- (void)stop_before_io_device_change:(unsigned int)a0 reply:(id /* block */)a1;
- (void)start_after_io_device_change:(unsigned int)a0 reply:(id /* block */)a1;

@end
