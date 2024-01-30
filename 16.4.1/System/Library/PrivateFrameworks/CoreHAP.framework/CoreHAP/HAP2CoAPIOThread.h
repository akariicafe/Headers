@class NSMutableSet, NSMutableArray, HAP2Lock;
@protocol HAP2CoAPIOThreadDelegate;

@interface HAP2CoAPIOThread : NSThread {
    int _wakeupPipeRead;
    int _wakeupPipeWrite;
    NSMutableArray *_queue;
    NSMutableArray *_messageQueue;
    NSMutableArray *_completedQueue;
    NSMutableArray *_consumerInfo;
    HAP2Lock *_lock;
    id<HAP2CoAPIOThreadDelegate> _delegate;
    NSMutableSet *_pendingMessages;
    NSMutableArray *_zombieSessions;
    unsigned long long _pendingMessagesThreshold;
}

+ (void)initialize;

- (void)main;
- (void)_enqueue:(id)a0;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)unregisterConsumer:(id)a0;
- (void).cxx_destruct;
- (void)_assertIsCurrentThread;
- (void)_cleanupWithContext:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a0;
- (struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)_createContext;
- (BOOL)_processQueueEntry:(id)a0 context:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a1;
- (BOOL)_processQueueWithContext:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a0;
- (BOOL)_processSessionBlock:(id /* block */)a0 consumer:(id)a1 context:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a2;
- (void)_registerConsumer:(id)a0 context:(struct coap_context_t { unsigned short x0[6]; struct coap_resource_t *x1; struct coap_resource_t *x2; struct coap_async_state_t *x3; unsigned long long x4; struct coap_queue_t *x5; struct coap_endpoint_t *x6; struct coap_session_t *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void *x18; char *x19; unsigned long long x20; char *x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; void *x28; } *)a1;
- (void)_unregisterConsumer:(id)a0;
- (void)_wakeUpThread;
- (id)initWithQualityOfService:(long long)a0 delegate:(id)a1;
- (void)queueSessionBlockForConsumer:(id)a0 sessionBlock:(id /* block */)a1 withTimeout:(double)a2 requiresCompletion:(BOOL)a3;
- (void)queueSessionCompletionForConsumer:(id)a0;
- (void)registerConsumer:(id)a0;

@end
