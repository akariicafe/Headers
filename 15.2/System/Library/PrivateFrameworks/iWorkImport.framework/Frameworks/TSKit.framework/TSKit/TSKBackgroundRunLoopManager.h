@class NSHashTable, NSObject, TSKRunLoopTicket;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface TSKBackgroundRunLoopManager : NSObject {
    NSObject<OS_dispatch_group> *_startingRunLoopGroup;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_requestSerializationQueue;
    NSHashTable *_activeTickets;
    TSKRunLoopTicket *_mainRunLoopTicket;
    TSKRunLoopTicket *_startingTicket;
}

@property (class, readonly) TSKBackgroundRunLoopManager *sharedManager;

- (void).cxx_destruct;
- (id)initSingleton;
- (void)startRunLoop;
- (BOOL)isManagedRunLoop:(struct __CFRunLoop { } *)a0;
- (id)runLoopTicketForManagedRunLoop:(struct __CFRunLoop { } *)a0;
- (struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)threadIdForTicket:(id)a0;
- (struct __CFRunLoop { } *)runLoopForTicket:(id)a0;
- (id)runLoopTicketWithQualityOfService:(long long)a0;

@end
