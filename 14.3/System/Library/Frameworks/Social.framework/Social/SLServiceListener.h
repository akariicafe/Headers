@class Protocol, NSString, NSXPCListener, NSXPCInterface, NSArray;

@interface SLServiceListener : NSObject <NSXPCListenerDelegate> {
    Class _sessionClass;
    Protocol *_serviceProtocol;
    NSXPCListener *_listener;
    NSArray *_allowedEntitlements;
}

@property (retain) NSString *serviceName;
@property (retain) NSXPCInterface *clientInterface;
@property (retain) NSString *persistentStoreName;
@property (retain) NSString *managedObjectModelPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)_verifyAuthorizationForConnection:(id)a0;
- (id)initWithExportedSessionClass:(Class)a0 serviceProtocol:(id)a1;
- (void)restrictToClientsWithEntitlements:(id)a0;
- (void)beginAcceptingConnections;

@end
