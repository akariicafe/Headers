@class NSString, NSObject;
@protocol OS_nw_connection, OS_dispatch_source, OS_nw_parameters, OS_dispatch_queue, OS_nw_endpoint, OS_nw_error, OS_xpc_object, OS_nw_path;

@interface NWConcrete_tcp_connection : NSObject <OS_tcp_connection> {
    NSObject<OS_xpc_object> *tc_context;
    NSObject<OS_nw_connection> *tc_nwconn;
    NSObject<OS_nw_error> *tc_last_nw_error;
    NSObject<OS_nw_path> *tc_nw_current_path;
    NSObject<OS_nw_endpoint> *tc_network_endpoint;
    NSObject<OS_nw_parameters> *tc_network_parameters;
    NSObject<OS_dispatch_queue> *tc_client_queue;
    id /* block */ tc_event;
    id /* block */ tc_cancel_handler;
    NSObject<OS_dispatch_source> *tc_connection_attempt_timer;
    NWConcrete_tcp_connection *tc_internally_retained_object;
    unsigned long long tc_id;
    unsigned long long tc_attempt_timeout_nanos;
    int tc_error;
    int tc_dup_fd;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } tc_lock;
    int tc_usage_model;
    long long tc_quality;
    unsigned int tc_keepalive_count;
    unsigned int tc_keepalive_interval;
    unsigned int tc_adaptive_read_count;
    unsigned int tc_adaptive_write_count;
    unsigned int tc_minimum_throughput;
    unsigned char tc_state;
    unsigned char tc_by;
    unsigned char tc_event_read_close_delivered : 1;
    unsigned char tc_event_write_close_delivered : 1;
    unsigned char tc_event_connected_delivered : 1;
    unsigned char tc_event_disconnected_delivered : 1;
    unsigned char tc_better_route : 1;
    unsigned char tc_not_viable : 1;
    unsigned char tc_attempt_timeout_should_generate_event : 1;
    unsigned char tc_allow_socket_access : 1;
    unsigned char tc_sent_connected : 1;
    unsigned char tc_sent_tls_finished : 1;
    unsigned char tc_state_has_been_preparing : 1;
    unsigned char tc_client_owns_dup_fd : 1;
    unsigned char tc_started : 1;
    unsigned char tc_keepalive_events : 1;
    unsigned char tc_adaptive_read_events : 1;
    unsigned char tc_adaptive_write_events : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
