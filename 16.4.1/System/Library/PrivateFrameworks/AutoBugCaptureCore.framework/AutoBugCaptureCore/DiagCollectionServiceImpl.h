@class NSString, ABCAdministrator, DiagnosticExtensionController, NSObject;
@protocol OS_dispatch_queue;

@interface DiagCollectionServiceImpl : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *queue;
    DiagnosticExtensionController *deController;
}

@property (weak, nonatomic) ABCAdministrator *administrator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)shutdown;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (BOOL)assertEntitlement:(id)a0 entitlement:(id)a1;
- (void)collectPayloadsWithIdentifier:(id)a0 diagnosticExtensions:(id)a1 reply:(id /* block */)a2;
- (void)collectPayloadsWithIdentifier:(id)a0 diagnosticExtensionsWithParameters:(id)a1 reply:(id /* block */)a2;
- (id)diagnosticExtensionController;

@end
