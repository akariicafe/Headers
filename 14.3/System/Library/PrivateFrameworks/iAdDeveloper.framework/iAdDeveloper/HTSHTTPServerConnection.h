@class NSString, NSTimer, HTSHTTPServer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate> {
    HTSHTTPServer *_server;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_readSource;
    BOOL _readActive;
    NSObject<OS_dispatch_source> *_writeSource;
    BOOL _writeActive;
    int _socket;
    int _socketRefCount;
    struct __CFHTTPMessage { } *_incomingMessage;
    NSMutableArray *_incomingQueue;
    NSMutableArray *_outputQueue;
    BOOL _outputStalled;
    BOOL _closeOnEmptyQueue;
}

@property (nonatomic) double lastActivity;
@property (retain, nonatomic) NSTimer *idleTimer;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithServer:(id)a0 socket:(int)a1;
- (void)_closeInputStream;
- (void)_closeOutputStream;
- (void)_processIncomingBytes:(const char *)a0 length:(long long)a1;
- (void)sendResponse:(id)a0 withLatency:(double)a1 closeAfterSending:(BOOL)a2;
- (void)_processStreamInput;
- (void)_processStreamOutput;
- (void)_shutdownIdleConnection:(id)a0;
- (void)printData:(id)a0 withMessage:(id)a1;

@end
