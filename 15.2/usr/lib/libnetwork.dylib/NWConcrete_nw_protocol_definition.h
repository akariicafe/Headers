@class NSString;

@interface NWConcrete_nw_protocol_definition : NSObject <OS_nw_protocol_definition> {
    struct nw_protocol_identifier { char name[32]; int level; int mapping; } identifier;
    unsigned char unique_identifier[16];
    int variant;
    void /* function */ *allocate_globals;
    void /* function */ *allocate_context_globals;
    void /* function */ *deallocate_globals;
    void /* function */ *allocate_instance_state;
    void /* function */ *deallocate_instance_state;
    void /* function */ *allocate_flow_state;
    void /* function */ *deallocate_flow_state;
    void /* function */ *replace_flow_state;
    void /* function */ *allocate_options;
    void /* function */ *copy_options;
    void /* function */ *deallocate_options;
    void /* function */ *check_equality_options;
    void /* function */ *compare_options;
    void /* function */ *serialize_options;
    void /* function */ *deserialize_options;
    void /* function */ *allocate_metadata;
    void /* function */ *deallocate_metadata;
    void /* function */ *initialize_metadata;
    void /* function */ *finalize_metadata;
    void /* function */ *serialize_metadata;
    void /* function */ *deserialize_metadata;
    void /* function */ *create_reply;
    void /* function */ *copy_original;
    void /* function */ *set_original;
    void /* function */ *copy_message_options;
    void /* function */ *deallocate_cache_entry;
    void /* function */ *should_flush_cache;
    void /* function */ *initialize;
    void /* function */ *destroy;
    void /* function */ *handle_inbound;
    void /* function */ *handle_outbound;
    void /* function */ *handle_error;
    void /* function */ *inbound_starting;
    void /* function */ *inbound_stopping;
    void /* function */ *outbound_starting;
    void /* function */ *outbound_stopping;
    void /* function */ *start;
    void /* function */ *stop;
    void /* function */ *link_state;
    void /* function */ *traffic_mgmt;
    void /* function */ *max_message_size;
    void /* function */ *copy_metadata;
    void /* function */ *copy_establishment_report;
    void /* function */ *copy_data_transfer_snapshot;
    void /* function */ *path_changed_handler;
    void /* function */ *fallback_changed_handler;
    void /* function */ *message_size_handler;
    void /* function */ *framer_create;
    id /* block */ framer_start;
    unsigned int custom_flow_map_key_size;
    unsigned int metadata_size;
    unsigned char framer : 1;
    unsigned char supports_replies : 1;
    unsigned char message_is_stream : 1;
    unsigned char receive_single_message : 1;
    unsigned char multipath : 1;
    unsigned char supports_discontiguous_data : 1;
    unsigned char has_global_definition : 1;
    unsigned char is_proxy : 1;
    unsigned char serialize_in_parameters : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
