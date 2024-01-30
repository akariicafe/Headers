@class NSObject;
@protocol OS_dispatch_queue;

@interface OS_xpc_remote_outstanding_reply : NSObject {
    unsigned long long msg_id;
    id /* block */ reply_handler;
    NSObject<OS_dispatch_queue> *reply_queue;
    OS_xpc_remote_outstanding_reply *link_stqe_next;
}

- (void).cxx_destruct;

@end
