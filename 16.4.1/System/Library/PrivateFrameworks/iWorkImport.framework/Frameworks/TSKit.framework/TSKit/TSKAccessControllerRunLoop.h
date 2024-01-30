@class TSKRunLoopTicket;

@interface TSKAccessControllerRunLoop : NSObject {
    TSKRunLoopTicket *_ticket;
    struct __CFRunLoop { } *_runLoop;
}

@property (readonly) TSKRunLoopTicket *ticket;
@property (readonly) struct __CFRunLoop { } *runLoop;
@property (readonly) struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *threadId;

- (void).cxx_destruct;
- (id)initWithTicket:(id)a0 andRunLoop:(struct __CFRunLoop { } *)a1;

@end
