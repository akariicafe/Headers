@class NSString, NSObject;
@protocol OS_nw_array, OS_nw_protocol_definition, OS_nw_context, OS_nw_endpoint, OS_nw_parameters, OS_nw_dictionary, OS_nw_protocol_metadata;

@interface NWConcrete_nw_framer : NSObject <OS_nw_framer> {
    NSObject<OS_nw_protocol_definition> *parent_definition;
    struct nw_protocol_callbacks { void /* function */ *add_input_handler; void /* function */ *remove_input_handler; void /* function */ *replace_input_handler; void /* function */ *connect; void /* function */ *disconnect; void /* function */ *connected; void /* function */ *disconnected; void /* function */ *error; void /* function */ *input_available; void /* function */ *output_available; void /* function */ *get_input_frames; void /* function */ *get_output_frames; void /* function */ *finalize_output_frames; void /* function */ *link_state; void /* function */ *get_parameters; void /* function */ *get_path; void /* function */ *get_local_endpoint; void /* function */ *get_remote_endpoint; void /* function */ *register_notification; void /* function */ *unregister_notification; void /* function */ *notify; void /* function */ *updated_path; void /* function */ *supports_external_data; void /* function */ *input_finished; void /* function */ *output_finished; void /* function */ *get_output_local_endpoint; void /* function */ *get_output_interface; void /* function */ *waiting_for_output; void /* function */ *copy_info; void /* function */ *add_listen_handler; void /* function */ *remove_listen_handler; void /* function */ *get_message_properties; void /* function */ *reset; void /* function */ *input_flush; } callbacks;
    struct nw_protocol { unsigned char flow_id[16]; struct nw_protocol_identifier *identifier; struct nw_protocol_callbacks *callbacks; struct nw_protocol *output_handler; void *handle; struct nw_protocol *default_input_handler; void *output_handler_context; } protocol;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_dictionary> *connection_state;
    NSObject<OS_nw_protocol_metadata> *pending_inbound_message;
    id /* block */ start;
    id /* block */ parse_input;
    id /* block */ write_output;
    id /* block */ wakeup;
    id /* block */ stop;
    id /* block */ cleanup;
    id /* block */ copy_metadata;
    unsigned long long handshake_milliseconds;
    unsigned long long handshake_rtt_milliseconds;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } inbound_frames;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } outbound_frames;
    unsigned long long input_needed;
    unsigned long long input_body_remaining;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } received_input_frames;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } pending_input_frames;
    unsigned int pending_input_frame_count;
    NSObject<OS_nw_array> *output_data_array;
    id /* block */ wakeup_block;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } received_output_frames;
    NSObject<OS_nw_protocol_metadata> *pending_output_message;
    unsigned int pending_output_message_length;
    unsigned int pending_output_frames;
    unsigned int pending_output_cursor;
    unsigned short prepended_log_id_num;
    unsigned char supports_external_data : 1;
    unsigned char output_frame_as_message : 1;
    unsigned char in_start : 1;
    unsigned char called_start : 1;
    unsigned char ready : 1;
    unsigned char flow_controlled : 1;
    unsigned char waiting_for_flow_control : 1;
    unsigned char in_input_callout : 1;
    unsigned char in_input_available : 1;
    unsigned char new_input_available : 1;
    unsigned char in_output_callout : 1;
    unsigned char pending_input_should_mark_complete : 1;
    unsigned char pending_output_message_complete : 1;
    unsigned char pending_output_connection_complete : 1;
    unsigned char pending_output_finished : 1;
    unsigned char failed : 1;
    unsigned char pass_through_input : 1;
    unsigned char pass_through_output : 1;
    unsigned char input_suspended : 1;
    unsigned char wait_for_early_data : 1;
    unsigned char block_lower_metadata : 1;
    unsigned char input_available_unacknowledged : 1;
    unsigned char output_blocked : 1;
    char log_str[84];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
