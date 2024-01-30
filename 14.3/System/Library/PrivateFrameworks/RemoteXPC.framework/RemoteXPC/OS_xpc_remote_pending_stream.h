@class OS_xpc_remote_channel, NSObject;
@protocol OS_dispatch_io;

@interface OS_xpc_remote_pending_stream : NSObject {
    unsigned long long stream_id;
    OS_xpc_remote_channel *channel;
    NSObject<OS_dispatch_io> *io;
    int direction;
    id /* block */ completion_handler;
    int error;
    OS_xpc_remote_pending_stream *link_stqe_next;
}

- (void).cxx_destruct;

@end
