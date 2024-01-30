@class NSObject;
@protocol OS_dispatch_queue;

@interface GKAsyncSocket : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy, nonatomic) id /* block */ receiveDataHandler;
@property (copy, nonatomic) id /* block */ connectedHandler;
@property (retain, nonatomic) id socketName;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setSyncQueue:(id)a0;
- (id)syncQueue;
- (void)invalidate;
- (void)sendData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)tcpAttachSocketDescriptor:(int)a0;
- (void)tcpConnectSockAddr:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 port:(unsigned short)a1;

@end
