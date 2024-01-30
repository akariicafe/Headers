@class NSString, SMBPiston, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_nw_endpoint, OS_dispatch_semaphore, OS_nw_connection, OS_dispatch_queue;

@interface SMBSocket : NSObject {
    SMBPiston *pd;
    unsigned long long state;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_endpoint> *remote_endpoint;
    NSObject<OS_dispatch_semaphore> *event_semaphore;
    int nw_conn_state;
    NSObject<OS_dispatch_queue> *nw_conn_queue;
    unsigned int is_NetBIOS;
    unsigned char ipv4v6DotName[46];
    const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *server_addr;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } io_rqlock;
    NSMutableArray *io_rqlist;
    NSObject<OS_dispatch_queue> *send_queue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } skt_lock;
    NSObject<OS_dispatch_queue> *timer_queue;
    NSObject<OS_dispatch_source> *timer;
    unsigned int timer_running;
    NSObject<OS_dispatch_semaphore> *timer_semaphore;
    id /* block */ event_handler_callback;
}

@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) NSObject<OS_dispatch_queue> *recv_queue;
@property (retain) NSObject<OS_dispatch_queue> *signing_queue;
@property (retain) NSString *netBiosName;
@property (retain) NSString *serverName;
@property unsigned short port;
@property unsigned int connectTimeOut;
@property struct timespec { long long tv_sec; long long tv_nsec; } last_recv;
@property struct timespec { long long tv_sec; long long tv_nsec; } last_echo;

- (unsigned int)isPerAppVPN;
- (int)sendRequest:(id)a0;
- (int)send:(id)a0;
- (void)setEventHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)readData:(const void *)a0;
- (int)processReply:(void *)a0;
- (void)setNetBIOSHeader:(unsigned int *)a0 nbType:(unsigned char)a1 length:(unsigned int)a2;
- (id /* block */)getEventHandler;
- (void)callEventHandler:(unsigned int)a0 contextPtr:(id)a1 returnValue:(unsigned int)a2;
- (void)closeSocket;
- (int)connectSocket;
- (char *)getIPv4IPv6DotName;
- (unsigned int)getIPv4IPv6DotNameMaxLength;
- (const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)getServerAddress;
- (int)openSocket:(id)a0;
- (void)readNBHeader;
- (void)timeOutCheck;
- (int)writeEnabled;

@end
