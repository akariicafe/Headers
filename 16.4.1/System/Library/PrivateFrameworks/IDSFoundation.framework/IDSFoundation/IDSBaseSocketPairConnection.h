@class IMWeakReference, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSBaseSocketPairConnection : NSObject {
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    double _lastDateCheck;
    long long _bytesReceived;
    double _prevBPS;
    BOOL _writeSourceIsResumed;
}

@property (readonly, nonatomic) int socket;

- (void)setDestination:(id)a0;
- (void)endSession;
- (void)dealloc;
- (void)_callDelegatesWithBlock:(id /* block */)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (id)initWithSocket:(int)a0 queue:(id)a1 delegate:(id)a2;
- (BOOL)sendData:(id)a0;
- (void)_processBytesAvailable;
- (void)_sendToConnectedSocket;
- (void)_setupWriteSource;
- (id)initWithSocket:(int)a0 queue:(id)a1 delegate:(id)a2 start:(BOOL)a3;

@end
