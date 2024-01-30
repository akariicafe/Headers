@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_tcp_listener;

@interface ATNetServiceListener : ATMessageLinkListener {
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    NSObject<OS_tcp_listener> *_tcpListener;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) BOOL enableTLS;

- (void).cxx_destruct;
- (void)stop;
- (BOOL)start;
- (id)initWithServiceName:(id)a0 type:(id)a1 domain:(id)a2;

@end
