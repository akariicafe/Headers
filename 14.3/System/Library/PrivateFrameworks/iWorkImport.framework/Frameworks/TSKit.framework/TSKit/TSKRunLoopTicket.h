@interface TSKRunLoopTicket : NSObject {
    long long _qualityOfService;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_threadId;
    struct __CFRunLoop { } *_runLoop;
}

@property (readonly) long long qualityOfService;

- (id)initWithQualityOfService:(long long)a0;
- (struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)threadId;
- (void)setRunLoop:(struct __CFRunLoop { } *)a0;
- (struct __CFRunLoop { } *)runLoop;
- (BOOL)hasRunLoop:(struct __CFRunLoop { } *)a0;
- (void)setThreadId:(struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)a0;

@end
