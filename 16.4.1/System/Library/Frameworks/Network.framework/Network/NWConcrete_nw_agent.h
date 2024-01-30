@class NSString, NSObject;
@protocol OS_nw_nexus, OS_dispatch_data, OS_nw_context, OS_nw_dictionary, OS_dispatch_source, OS_dispatch_queue, OS_nw_fd_wrapper;

@interface NWConcrete_nw_agent : NSObject <OS_nw_agent> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int logging_id;
    _Atomic unsigned int last_client_id;
    char domain[32];
    char type[32];
    char description[128];
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_dispatch_data> *data;
    int state;
    int options;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_nexus> *nexus;
    int flow_protocol_level;
    int flow_endpoint_type;
    unsigned long long tx_slots;
    unsigned long long rx_slots;
    unsigned long long slot_size;
    int flow_request_types[15];
    unsigned char flow_request_type_count;
    struct nw_agent_resolve_handlers { int resolve_from_type; int resolve_to_type; id /* block */ start_resolve_handler; id /* block */ stop_resolve_handler; } resolve_handlers[15];
    unsigned char resolve_handler_count;
    unsigned int token_low_water;
    unsigned char uuid[16];
    NSObject<OS_nw_dictionary> *clients;
    NSObject<OS_nw_dictionary> *channels;
    id /* block */ activate_handler;
    id /* block */ assert_handler;
    id /* block */ unassert_handler;
    id /* block */ start_flow_handler;
    id /* block */ stop_flow_handler;
    id /* block */ start_browse_handler;
    id /* block */ stop_browse_handler;
    id /* block */ add_members_handler;
    id /* block */ remove_members_handler;
    id /* block */ tokens_needed_handler;
    id /* block */ error_handler;
    NSObject<OS_nw_fd_wrapper> *fd_wrapper;
    NSObject<OS_dispatch_source> *event_source;
    unsigned char registered : 1;
    unsigned char supports_listen : 1;
    unsigned char require_assert : 1;
    unsigned char nexus_agent : 1;
    unsigned char browse_agent : 1;
    unsigned char resolve_agent : 1;
    unsigned char group_agent : 1;
    unsigned char do_not_coalesce_flow : 1;
    unsigned char __pad_bits : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
