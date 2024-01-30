@class NSObject, OSLogEventStream, OSLogEntry;
@protocol OS_dispatch_semaphore;

@interface OSLogEnumerator : NSEnumerator {
    OSLogEventStream *_stream;
    OSLogEntry *_next;
    BOOL _done;
    NSObject<OS_dispatch_semaphore> *_pushDone;
    NSObject<OS_dispatch_semaphore> *_handlerDone;
}

- (void)_handleInvalidation;
- (void).cxx_destruct;
- (void)dealloc;
- (id)nextObject;
- (id)initWithEventStream:(id)a0 options:(unsigned long long)a1 position:(id)a2;
- (void)_handleEventProxy:(id)a0;

@end
