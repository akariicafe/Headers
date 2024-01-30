@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_mach;

@interface AFKEndpointInterface : NSObject {
    unsigned int _service;
    unsigned int _connect;
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_asyncPort;
    NSObject<OS_dispatch_source> *_source;
    unsigned int _state;
    NSMutableDictionary *_properties;
    id /* block */ _responseHandler;
    id /* block */ _reportHandler;
    id /* block */ _commandHandler;
    id /* block */ _eventHandler;
    struct _IODataQueueMemory { unsigned int x0; unsigned int x1; unsigned int x2; struct _IODataQueueEntry { unsigned int x0; unsigned char x1[4]; } x3[1]; } *_dataQueue;
    unsigned long long _dataQueueSize;
    unsigned int _dataQueuePort;
    NSObject<OS_dispatch_mach> *_dataQueueMachChannel;
    unsigned long long _regID;
}

+ (id)withService:(unsigned int)a0;
+ (id)withService:(unsigned int)a0 properties:(id)a1;

- (void)cancel;
- (void)setEventHandler:(id /* block */)a0;
- (void)setResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (void)activate;
- (void)setDispatchQueue:(id)a0;
- (void)_cancel;
- (void)setCommandHandler:(id /* block */)a0;
- (void)setReportHandler:(id /* block */)a0;
- (void)asyncCallback:(struct AsyncContext { void *x0; void *x1; unsigned long long x2; id x3; } *)a0 result:(int)a1 bufferSize:(unsigned long long)a2;
- (int)enqueueCommand:(unsigned int)a0 timestamp:(unsigned long long)a1 inputBuffer:(const void *)a2 inputBufferSize:(unsigned long long)a3 outputPayloadSize:(unsigned long long)a4 context:(void *)a5 options:(unsigned int)a6;
- (int)enqueueCommand:(unsigned int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2 outputPayloadSize:(unsigned long long)a3 context:(void *)a4 options:(unsigned int)a5;
- (int)enqueueReport:(unsigned int)a0 timestamp:(unsigned long long)a1 inputBuffer:(const void *)a2 inputBufferSize:(unsigned long long)a3 options:(unsigned int)a4;
- (int)enqueueReport:(unsigned int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2 options:(unsigned int)a3;
- (int)enqueueResponseForContext:(void *)a0 status:(int)a1 timestamp:(unsigned long long)a2 outputBuffer:(void *)a3 outputBufferSize:(unsigned long long)a4 options:(unsigned int)a5;
- (int)enqueueResponseForContext:(void *)a0 status:(int)a1 outputBuffer:(void *)a2 outputBufferSize:(unsigned long long)a3 options:(unsigned int)a4;
- (void)dequeueDataMessage;
- (int)startSession:(BOOL)a0;

@end
