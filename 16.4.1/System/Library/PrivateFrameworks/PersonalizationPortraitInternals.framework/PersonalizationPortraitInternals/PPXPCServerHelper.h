@interface PPXPCServerHelper : NSObject

+ (BOOL)hasTrueBooleanEntitlement:(id)a0 connection:(id)a1;
+ (BOOL)checkForAndLogTrueBooleanEntitlement:(id)a0 connection:(id)a1 serviceName:(id)a2;
+ (BOOL)shouldAcceptConnection:(id)a0 serviceName:(id)a1 allowedServerInterface:(id)a2 allowedClientInterface:(id)a3 requestHandler:(id)a4 validateConnection:(id /* block */)a5 setupClientProxy:(id /* block */)a6 interruptionHandler:(id /* block */)a7 invalidationHandler:(id /* block */)a8;

@end
