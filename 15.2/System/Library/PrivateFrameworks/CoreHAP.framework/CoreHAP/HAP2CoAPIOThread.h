@class NSMutableArray, HAP2Lock;
@protocol HAP2CoAPIOThreadDelegate;

@interface HAP2CoAPIOThread : NSThread {
    int _wakeupPipeRead;
    int _wakeupPipeWrite;
    NSMutableArray *_queue;
    NSMutableArray *_consumerInfo;
    HAP2Lock *_lock;
    id<HAP2CoAPIOThreadDelegate> _delegate;
}

- (void)_enqueue:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterConsumer:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)registerConsumer:(id)a0;
- (void)queueSessionBlockForConsumer:(id)a0 sessionBlock:(id /* block */)a1;
- (id)initWithQualityOfService:(long long)a0 delegate:(id)a1;
- (void)_assertIsCurrentThread;
- (void)_wakeUpThread;
- (struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)_createContext;
- (BOOL)_processQueueWithContext:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a0;
- (void)_cleanupWithContext:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a0;
- (BOOL)_processQueueEntry:(id)a0 context:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a1;
- (void)_registerConsumer:(id)a0 context:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a1;
- (void)_unregisterConsumer:(id)a0;
- (BOOL)_processSessionBlock:(id /* block */)a0 consumer:(id)a1 context:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a2;

@end
