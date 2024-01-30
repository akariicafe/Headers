@class NSString, NSObject;
@protocol OS_nw_listener, OS_nw_array, OS_nw_parameters, OS_nw_error, OS_dispatch_queue, OS_nw_group_descriptor;

@interface NWConcrete_nw_connection_group : NSObject <OS_nw_connection_group> {
    NSObject<OS_dispatch_queue> *client_queue;
    unsigned int client_qos_class;
    NWConcrete_nw_connection_group *internally_retained_object;
    id /* block */ state_changed_handler;
    int state;
    NSObject<OS_nw_error> *last_error;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_group_descriptor> *group_descriptor;
    NSObject<OS_nw_listener> *listener;
    NSObject<OS_nw_array> *connections;
    id /* block */ receive_handler;
    id /* block */ message_preview_handler;
    char *description;
    char *redacted_description;
    unsigned int log_id;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int maximum_message_size;
    unsigned short initial_port;
    unsigned char started : 1;
    unsigned char reject_oversized_messages : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
