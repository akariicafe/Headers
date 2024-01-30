@class NSString, NSObject;
@protocol OS_nw_path, NWConcrete_nw_endpoint_mode_handler, OS_nw_path_evaluator, OS_nw_context, OS_nw_parameters, OS_nw_endpoint, OS_nw_association, OS_xpc_object, OS_nw_object;

@interface NWConcrete_nw_endpoint_handler : NSObject <OS_nw_endpoint_handler> {
    void /* function */ *report_callback;
    NSObject<OS_nw_object> *callback_context;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_association> *association;
    NSObject<OS_nw_path> *current_path;
    NWConcrete_nw_endpoint_handler *parent_handler;
    struct nw_endpoint_handler_event_s { unsigned short domain; unsigned short event; } event;
    NSObject<OS_xpc_object> *inactive_agent_uuids;
    NSObject<OS_xpc_object> *inactive_agent_dictionaries;
    NSObject<OS_xpc_object> *triggered_agent_uuids;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    int mode;
    int state;
    unsigned long long start_time;
    void *fallback_timer;
    unsigned int top_id;
    _Atomic unsigned int last_child_id;
    unsigned char id_chain[16];
    char id_str[75];
    NSObject<NWConcrete_nw_endpoint_mode_handler> *mode_handler;
    NSObject<OS_nw_path_evaluator> *override_evaluator;
    int privacy_stance;
    unsigned char dry_run : 1;
    unsigned char triggering_voluntary_agents : 1;
    unsigned char reuse_association : 1;
    unsigned char has_better_path : 1;
    unsigned char has_finished_transport : 1;
    unsigned char logging_disabled : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
