@class NSString, NSObject;
@protocol OS_nw_frame, OS_nw_association, OS_nw_parameters, OS_dispatch_queue;

@interface boringssl_concrete_nw_protocol_boringssl : NSObject <OS_nw_protocol_boringssl> {
    struct nw_protocol { unsigned char flow_id[16]; struct nw_protocol_identifier *identifier; struct nw_protocol_callbacks *callbacks; struct nw_protocol *output_handler; void *handle; struct nw_protocol *default_input_handler; void *output_handler_context; } protocol;
    unsigned int ref_cnt;
    void /* function */ *read_func;
    void /* function */ *write_func;
    void /* function */ *handshake_func;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } input_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } unassigned_input_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } read_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } finalized_output_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_initial_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_early_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_handshake_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_application_frame_array;
    id /* block */ message_writer;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *initial_output_handler;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *early_output_handler;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *handshake_output_handler;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *application_output_handler;
    NSObject<OS_nw_parameters> *parameters;
    void *handshake_timer;
    NSObject<OS_nw_association> *association;
    void *context;
    void *boringssl_bio;
    const char *address_string;
    NSObject<OS_dispatch_queue> *client_queue;
    NSObject<OS_nw_frame> *current_input_frame;
    unsigned int claimed_input_bytes;
    unsigned int input_frame_byte_count;
    int stack_error;
    unsigned char message_mode : 1;
    unsigned char trust_invalid_certs : 1;
    unsigned char started_negotiation : 1;
    unsigned char write_ready : 1;
    unsigned char read_ready : 1;
    unsigned char waiting_for_writable : 1;
    unsigned char input_available_unacknowledged : 1;
    unsigned char input_suspended : 1;
    unsigned char deferred_input_finished : 1;
    unsigned char servicing_reads : 1;
    unsigned char servicing_handshake : 1;
    unsigned char server : 1;
    unsigned char external_frames : 1;
    unsigned char early_data_enabled : 1;
    unsigned char did_receive_data_once : 1;
    unsigned char output_protocol_supports_early_data : 1;
    unsigned char received_connect : 1;
    unsigned char connected : 1;
    unsigned char sent_error : 1;
    unsigned char wake_flag : 1;
    unsigned char in_write_frames : 1;
    char log_str[84];
    unsigned char logging_disabled : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
