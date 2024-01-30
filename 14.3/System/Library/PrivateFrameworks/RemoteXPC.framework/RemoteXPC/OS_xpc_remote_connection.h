@class OS_xpc_remote_stream, NSString, OS_xpc_remote_message, OS_xpc_remote_outstanding_reply, OS_xpc_remote_listener, OS_remote_service, OS_xpc_remote_pending_stream, NSObject, OS_xpc_remote_channel;
@protocol OS_dispatch_queue, OS_nw_connection, OS_nw_listener;

@interface OS_xpc_remote_connection : NSObject <OS_xpc_object> {
    char *remote_service_name;
    NSObject<OS_nw_connection> *root_connection;
    NSObject<OS_nw_listener> *root_listener;
    BOOL root_channel_helo_received;
    OS_xpc_remote_channel *root_channel;
    BOOL reply_channel_helo_received;
    OS_xpc_remote_channel *reply_channel;
    BOOL server_mode;
    unsigned char protocol_version_number;
    unsigned long long protocol_feature_flags;
    OS_xpc_remote_message *msgq_stqh_first;
    OS_xpc_remote_message *msgq_stqh_last;
    OS_xpc_remote_pending_stream *pending_streams_stqh_first;
    OS_xpc_remote_pending_stream *pending_streams_stqh_last;
    OS_xpc_remote_stream *streams_stqh_first;
    OS_xpc_remote_stream *streams_stqh_last;
    OS_xpc_remote_outstanding_reply *outstanding_replies_stqh_first;
    OS_xpc_remote_outstanding_reply *outstanding_replies_stqh_last;
    unsigned long long next_msg_id;
    unsigned long long first_msg_id;
    unsigned long long local_service_version;
    unsigned long long remote_service_version;
    unsigned int traffic_class;
    int error;
    OS_remote_service *remote_service;
    int preexisting_socket;
    NSObject<OS_nw_connection> *preexisting_connection;
    BOOL requires_nw_listener_create_workaround;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internal_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target_queue;
@property (copy, nonatomic) id /* block */ event_handler;
@property int state;
@property (nonatomic) int type;
@property (nonatomic) BOOL send_in_progress;
@property (retain, nonatomic) OS_xpc_remote_listener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
