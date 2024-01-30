@class UIEventFetcher, UIEventEnvironment;

@interface UIEventDispatcher : NSObject <UIEventFetcherSink> {
    UIEventEnvironment *_mainEnvironment;
    UIEventFetcher *_eventFetcher;
    struct __CFRunLoopSource { } *_handleEventQueueRunLoopSource;
    struct __CFRunLoopSource { } *_collectHIDEventsRunLoopSource;
    struct __CFRunLoop { } *_runLoop;
}

- (id)initWithApplication:(id)a0;
- (void)eventFetcherDidReceiveEvents:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
