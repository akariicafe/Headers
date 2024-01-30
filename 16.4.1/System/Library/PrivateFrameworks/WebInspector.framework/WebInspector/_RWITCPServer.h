@class NSMutableArray, NSObject;
@protocol _RWITCPServerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface _RWITCPServer : NSObject {
    int _listenSocket;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_source> *_serverSource;
    NSMutableArray *_connections;
}

@property (readonly, weak, nonatomic) id<_RWITCPServerDelegate> delegate;

- (id)_initWithDelegate:(id)a0;
- (void)dealloc;
- (void)connectionClosed:(id)a0;
- (void).cxx_destruct;
- (id)initWithPort:(unsigned short)a0 delegate:(id)a1;
- (BOOL)_createListenDispatchSource;
- (BOOL)_listenOnPort:(unsigned short)a0;
- (id)initWithLaunchdSocketName:(const char *)a0 delegate:(id)a1;

@end
