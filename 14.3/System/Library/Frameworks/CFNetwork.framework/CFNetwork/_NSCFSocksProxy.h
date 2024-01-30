@class NSString, __CFN_SocksHandshake, NSProxyConnection, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    int _outPort;
    NSString *_outHost;
    __CFN_SocksHandshake *_socksHandshake;
    NSProxyConnection *_inbound;
    NSProxyConnection *_outbound;
    NSDictionary *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleIncomingConnection:(id)a0 queue:(id)a1 configuration:(id)a2;

- (void)connected:(int)a0;
- (void)outboundConnectionReceivedData:(id)a0 handler:(id /* block */)a1;
- (void)outboundConnectionCompleteWithError:(int)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;

@end
