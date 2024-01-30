@class NSXPCListener, NSString, NSArray, Protocol;

@interface AAFService : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *serviceListener;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSArray *preConnectEntitlements;
@property (readonly, nonatomic) Protocol *exportedProtocol;
@property (readonly, nonatomic) id exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startup;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)configureExportedInterface:(id)a0;
- (void)_configureListener;
- (BOOL)shouldAcceptNewConnection:(id)a0;

@end
