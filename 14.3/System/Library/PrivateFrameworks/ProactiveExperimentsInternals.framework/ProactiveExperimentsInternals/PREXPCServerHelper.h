@interface PREXPCServerHelper : NSObject

+ (BOOL)hasTrueBooleanEntitlement:(id)a0 connection:(id)a1;
+ (BOOL)checkForAndLogTrueBooleanEntitlement:(id)a0 connection:(id)a1 serviceName:(id)a2;
+ (BOOL)shouldAcceptConnection:(id)a0 serviceName:(id)a1 whitelistedServerInterface:(id)a2 requestHandler:(id)a3 validateConnection:(id /* block */)a4 setupClientProxy:(id /* block */)a5 interruptionHandler:(id /* block */)a6 invalidationHandler:(id /* block */)a7;

@end
