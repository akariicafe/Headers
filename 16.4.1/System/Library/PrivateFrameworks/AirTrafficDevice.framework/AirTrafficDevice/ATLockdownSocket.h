@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ATLockdownSocket : ATSocket {
    void *_lockdownInfo;
    struct _lockdown_connection { } *_connection;
    NSObject<OS_dispatch_source> *_recvSource;
    BOOL _isWifiConnection;
    NSObject<OS_dispatch_queue> *_socketRWQueue;
    char _readBuffer[65536];
}

@property (readonly, nonatomic) BOOL isWifi;

- (BOOL)isOpen;
- (BOOL)open;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(id)a0 withCompletion:(id /* block */)a1;
- (void)_readLength:(unsigned long long)a0;
- (id)initWithLockdownInfo:(void *)a0;
- (int)recv:(char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;
- (int)send:(const char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;

@end
