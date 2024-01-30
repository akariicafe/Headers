@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DiagCollectionClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *destinationDirectory;
}

- (id)init;
- (void).cxx_destruct;
- (id)setupXPCInterface;
- (void)collectDEPayloadsWithIdentifier:(id)a0 diagnosticExtensionsWithParameters:(id)a1 queue:(id)a2 reply:(id /* block */)a3;
- (id)initWithDestinationDirectory:(id)a0;
- (unsigned int)currentLoginUserID;
- (void)moveDiagnosticFilesToDestination:(id)a0 reply:(id /* block */)a1;

@end
