@interface IMDIncomingClientConnectionListener : SwiftNativeNSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ machServiceName;
    void /* unknown type, empty encoding */ allowedEntitlements;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ clients;
    void /* unknown type, empty encoding */ requestHandlers;
    void /* unknown type, empty encoding */ clientConnectionWorkloop;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;

@end
