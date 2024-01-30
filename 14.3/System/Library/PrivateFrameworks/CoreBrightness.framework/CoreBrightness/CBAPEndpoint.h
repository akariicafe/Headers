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

- (void)dealloc;
- (id)initWithServiceName:(id)a0;
- (unsigned int)findDCPServiceWithName:(id)a0;
- (void)handleResponse:(void *)a0 bufferSize:(unsigned long long)a1 res:(int)a2;
- (BOOL)setProperty:(id)a0 property:(id)a1;
- (id)copyProperty:(id)a0;
- (BOOL)sendCommand:(int)a0 inputBuffer:(const void *)a1 inputBufferSize:(unsigned long long)a2;

@end
