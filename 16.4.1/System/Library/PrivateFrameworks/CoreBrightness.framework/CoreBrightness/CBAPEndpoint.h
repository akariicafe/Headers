@class AFKEndpointInterface, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_semaphore;

@interface CBAPEndpoint : NSObject {
    AFKEndpointInterface *_endpoint;
    NSObject<OS_dispatch_queue> *_epQueue;
    NSObject<OS_dispatch_semaphore> *_dispatchSignal;
    unsigned int _service;
    id _responseObj;
    BOOL _status;
    unsigned int _timeoutCount;
    NSObject<OS_os_log> *_logHandle;
}

- (BOOL)setProperty:(id)a0 property:(id)a1;
- (void)dealloc;
- (id)copyProperty:(id)a0;
- (unsigned int)findDCPServiceWithName:(id)a0 role:(id)a1;
- (void)handleResponse:(void *)a0 bufferSize:(unsigned long long)a1 res:(int)a2;
- (id)initWithServiceName:(id)a0 role:(id)a1;
- (BOOL)sendCommand:(int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2;
- (id)sendIMGCommand:(id)a0 outputBufferSize:(unsigned long long)a1;
- (BOOL)sendOOBCommand:(int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2;

@end
