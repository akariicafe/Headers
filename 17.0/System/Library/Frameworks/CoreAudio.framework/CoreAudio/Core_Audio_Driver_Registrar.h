@class NSString, NSMutableSet;

@interface Core_Audio_Driver_Registrar : NSObject <NSXPCListenerDelegate, Core_Audio_Driver_Registrar_Protocol>

@property (nonatomic) void *registrar;
@property (retain, nonatomic) NSMutableSet *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)register_driver:(id)a0 bundle_url:(id)a1 bundle_id:(id)a2 cpu_type:(int)a3 reply:(id /* block */)a4;

@end
