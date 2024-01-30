@interface TSKRunLoopTicket : NSObject {
    long long _qualityOfService;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_threadId;
    struct __CFRunLoop { } *_runLoop;
}

@property (readonly) long long qualityOfService;

- (struct __CFRunLoop { } *)runLoop;
- (struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)threadId;
- (id)initWithQualityOfService:(long long)a0;
- (void)setRunLoop:(struct __CFRunLoop { } *)a0;
- (void)setThreadId:(struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)a0;
- (BOOL)hasRunLoop:(struct __CFRunLoop { } *)a0;

@end
