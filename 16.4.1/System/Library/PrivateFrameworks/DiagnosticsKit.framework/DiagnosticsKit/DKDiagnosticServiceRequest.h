@class NSXPCConnection, NSString, DKDiagnosticHostContext;

@interface DKDiagnosticServiceRequest : NSObject <DKExtensionHostAdapterDelegate>

@property (nonatomic) BOOL completed;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) DKDiagnosticHostContext *context;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id hostServicesDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didInvalidate;
- (void).cxx_destruct;
- (void)completeWithPayload:(id)a0 completion:(id /* block */)a1;
- (void)_completeWithDiagnosticResult:(id)a0 error:(id)a1;
- (void)cancelExtensionRequest;
- (void)didFailStart;
- (void)didInterrupt;
- (id)initWithHostServicesDelegate:(id)a0;

@end
