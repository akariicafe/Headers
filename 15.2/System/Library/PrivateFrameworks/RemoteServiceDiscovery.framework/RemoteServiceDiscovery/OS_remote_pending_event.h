@class NSObject;
@protocol OS_xpc_object;

@interface OS_remote_pending_event : NSObject {
    const char *service_name;
    NSObject<OS_xpc_object> *event;
    OS_remote_pending_event *next;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
