@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data, OS_xpc_object;

@interface OS_xpc_remote_message : NSObject {
    unsigned long long msg_id;
    id /* block */ barrier;
    NSObject<OS_dispatch_data> *body;
    id /* block */ reply_handler;
    NSObject<OS_dispatch_queue> *reply_queue;
    int ool_length;
    NSObject<OS_xpc_object> *ool[16];
    OS_xpc_remote_message *link_stqe_next;
}

- (void).cxx_destruct;

@end
