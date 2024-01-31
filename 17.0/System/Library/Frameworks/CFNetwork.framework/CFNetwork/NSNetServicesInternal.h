@class NSMutableArray, NSObject;
@protocol OS_tcp_listener;

@interface NSNetServicesInternal : NSObject {
    NSMutableArray *_monitors;
    NSObject<OS_tcp_listener> *_listener;
    struct __CFRunLoop { } *_scheduledRunLoop;
    struct __CFString { } *_scheduledMode;
}

- (void)dealloc;

@end
