@class NSXPCListenerEndpoint, NSString, NSXPCConnection;

@interface SOExtensionServiceConnection : NSObject <SORemoteExtensionServiceProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) NSXPCListenerEndpoint *serviceXpcEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
