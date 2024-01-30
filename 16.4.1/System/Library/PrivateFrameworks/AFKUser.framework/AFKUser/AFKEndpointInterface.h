@class NSSet, NSMutableDictionary, NSObject;
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
    id /* block */ _commandHandlerWithReturn;
    id /* block */ _commandHandler;
    id /* block */ _descriptorHandler;
    id /* block */ _eventHandler;
    struct _IODataQueueMemory { unsigned int x0; unsigned int x1; unsigned int x2; struct _IODataQueueEntry { unsigned int x0; unsigned char x1[4]; } x3[1]; } *_dataQueue;
    unsigned long long _dataQueueSize;
    unsigned int _dataQueuePort;
    NSObject<OS_dispatch_mach> *_dataQueueMachChannel;
    NSSet *_descriptorManagers;
}

@property (readonly, nonatomic) unsigned long long regID;

+ (id)withService:(unsigned int)a0;
+ (id)withService:(unsigned int)a0 properties:(id)a1;

- (id)initWithService:(unsigned int)a0;
- (void)_cancel;
- (void)activate:(unsigned int)a0;
- (void)setDispatchQueue:(id)a0;
- (void)setEventHandler:(id /* block */)a0;
- (void)cancel;
- (void)dealloc;
- (void)activate;
- (void)setResponseHandler:(id /* block */)a0;
- (void)setCommandHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (int)startSession:(BOOL)a0;
- (int)enqueueCommand:(unsigned int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2 outputPayloadSize:(unsigned long long)a3 context:(void *)a4 options:(unsigned int)a5;
- (int)enqueueCommand:(unsigned int)a0 timestamp:(unsigned long long)a1 inputBuffer:(const void *)a2 inputBufferSize:(unsigned long long)a3 outputPayloadSize:(unsigned long long)a4 context:(void *)a5 options:(unsigned int)a6;
- (void)setReportHandler:(id /* block */)a0;
- (void)asyncCallback:(struct AsyncContext { void *x0; void *x1; unsigned long long x2; id x3; } *)a0 result:(int)a1 timestamp:(unsigned long long)a2 bufferSize:(unsigned long long)a3;
- (void)dequeueDataMessage;
- (int)enqueueCommandSync:(unsigned int)a0 timestamp:(unsigned long long)a1 inputBuffer:(const void *)a2 inputBufferSize:(unsigned long long)a3 responseTimestamp:(unsigned long long *)a4 outputBuffer:(void *)a5 inOutBufferSize:(unsigned long long *)a6 options:(unsigned int)a7;
- (int)enqueueDescriptor:(id)a0 packetType:(unsigned int)a1 timestamp:(unsigned long long)a2 options:(unsigned int)a3;
- (int)enqueueReport:(unsigned int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2 options:(unsigned int)a3;
- (int)enqueueReport:(unsigned int)a0 timestamp:(unsigned long long)a1 inputBuffer:(const void *)a2 inputBufferSize:(unsigned long long)a3 options:(unsigned int)a4;
- (int)enqueueResponseForContext:(void *)a0 status:(int)a1 outputBuffer:(void *)a2 outputBufferSize:(unsigned long long)a3 options:(unsigned int)a4;
- (int)enqueueResponseForContext:(void *)a0 status:(int)a1 timestamp:(unsigned long long)a2 outputBuffer:(void *)a3 outputBufferSize:(unsigned long long)a4 options:(unsigned int)a5;
- (void)setCommandHandlerWithReturn:(id /* block */)a0;
- (void)setDescriptorHandler:(id /* block */)a0;
- (void)setDescriptorManagers:(id)a0;

@end
