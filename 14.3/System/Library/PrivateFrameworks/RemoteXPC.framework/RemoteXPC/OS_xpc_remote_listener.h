@class NSObject;
@protocol OS_dispatch_queue;

@interface OS_xpc_remote_listener : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    int type;
    id /* block */ accept_handler;
    id /* block */ cancel_handler;
    BOOL canceled;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
