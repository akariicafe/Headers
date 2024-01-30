@interface WiFiP2PXPCConnection : NSObject

+ (id)wifiPeerToPeerWorkloop;
+ (id)connectionToDaemonWithExportedObject:(id)a0 usingExportedInterface:(id)a1 queue:(id)a2 proxyObject:(id *)a3 withInvalidationHandler:(id /* block */)a4;

@end
