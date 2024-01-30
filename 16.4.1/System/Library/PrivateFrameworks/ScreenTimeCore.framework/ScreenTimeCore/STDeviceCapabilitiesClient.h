@class NSXPCConnection;

@interface STDeviceCapabilitiesClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)isCapabilityEnabledForUser:(id)a0 capability:(id)a1 completionHandler:(id /* block */)a2;

@end
