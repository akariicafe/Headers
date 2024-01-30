@class NSObject;
@protocol OS_dispatch_queue, OS_nw_connection, OS_dispatch_io;

@interface OS_xpc_remote_channel : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_nw_connection> *conn;
    id /* block */ event_handler;
    id /* block */ msg_handler;
    unsigned int state;
    int error;
    int stream_direction;
    NSObject<OS_dispatch_io> *stream_io;
    NSObject<OS_dispatch_io> *parent_io;
    BOOL tx_complete;
    unsigned char wire_version;
}

- (void).cxx_destruct;

@end
