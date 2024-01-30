@interface AMSEngagementExtensionConnection : NSObject <_EXMainConnectionHandler>

@property (readonly) id principalObject;

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)initWithPrincipalObject:(id)a0;
- (void)performRequestWithObject:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
