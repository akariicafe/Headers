@class NSObject;
@protocol OS_tcp_connection, NSProxyConnectionDelegate;

@interface NSProxyConnection : NSObject {
    BOOL _doCleanupWhenWritesCompleted;
    NSObject<OS_tcp_connection> *_connection;
    id<NSProxyConnectionDelegate> _delegate;
    long long _pendingWrites;
}

- (void)cancel;
- (id)initWithHost:(id)a0 port:(unsigned short)a1 queue:(id)a2 configuration:(id)a3;
- (void)write:(id)a0 handler:(id /* block */)a1;
- (void)read:(unsigned long long)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
