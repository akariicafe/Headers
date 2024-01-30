@class NSString, NSObject;
@protocol OS_tcp_connection, OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_source;

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate> {
    BOOL _connected;
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    NSString *_hostname;
    unsigned short _port;
    NSObject<OS_tcp_connection> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_source> *_source;
    char _readBuffer[65536];
}

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) BOOL enableTLS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_connect;
- (BOOL)open;
- (void)closeDescriptor;
- (id)initWithServiceName:(id)a0 type:(id)a1 domain:(id)a2;

@end
