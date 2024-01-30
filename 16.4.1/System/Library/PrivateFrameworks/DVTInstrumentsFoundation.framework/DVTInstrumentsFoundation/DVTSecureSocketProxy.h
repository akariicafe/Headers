@class DVTSecureSocketProxyBufferPool, NSObject;
@protocol OS_dispatch_group, OS_dispatch_io, OS_dispatch_source, OS_dispatch_queue;

@interface DVTSecureSocketProxy : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *receiveFromConnectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendToConnectionQueue;
@property (retain, nonatomic) DVTSecureSocketProxyBufferPool *receiveFromConnectionBufferPool;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *sendToConnectionCompleted;
@property (nonatomic) BOOL cancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_io> *socketIOChannel;
@property (nonatomic) unsigned long long pendingWrites;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *canReceiveFromConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *canSendToConnection;
@property (copy, nonatomic) id /* block */ receiveDataFromConnection;
@property (copy, nonatomic) id /* block */ sendDataToConnection;
@property (copy, nonatomic) id /* block */ cleanupConnection;

- (void).cxx_destruct;
- (void)_onIOQueue_cancelProxy;
- (void)_onIOQueue_finishCleanup;
- (void)_onIOQueue_sendDataToConnection:(id)a0;
- (void)readDataFromSocketAndSendToConnection;
- (void)receiveDataFromConnectionAndWriteToSocket;

@end
