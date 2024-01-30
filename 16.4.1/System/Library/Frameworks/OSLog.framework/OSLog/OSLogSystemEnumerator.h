@class NSObject, OSLogEventStream, OSLogEntry;
@protocol OS_dispatch_semaphore;

@interface OSLogSystemEnumerator : OSLogEnumerator {
    OSLogEventStream *_stream;
    OSLogEntry *_next;
    BOOL _done;
    NSObject<OS_dispatch_semaphore> *_pushDone;
    NSObject<OS_dispatch_semaphore> *_handlerDone;
}

- (id)nextObject;
- (void)_handleInvalidation;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleEventProxy:(id)a0;
- (id)initWithEventStream:(id)a0 options:(unsigned long long)a1 position:(id)a2;

@end
