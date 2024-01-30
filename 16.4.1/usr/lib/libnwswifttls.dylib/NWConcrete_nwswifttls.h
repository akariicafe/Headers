@class _TtC10nwswifttls14STLSHandshaker, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_data, OS_xpc_object, OS_nw_protocol_metadata, OS_nw_protocol_options, OS_dispatch_queue;

@interface NWConcrete_nwswifttls : NSObject <OS_nwswifttls> {
    struct nw_protocol { unsigned char flow_id[16]; struct nw_protocol_identifier *identifier; struct nw_protocol_callbacks *callbacks; struct nw_protocol *output_handler; void *handle; struct nw_protocol *default_input_handler; void *output_handler_context; } protocol;
    NSObject<OS_nw_protocol_options> *options;
    NSObject<OS_nw_protocol_metadata> *metadata;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *initial_output_handler;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *early_output_handler;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *handshake_output_handler;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *application_output_handler;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_initial_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_early_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_handshake_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_application_frame_array;
    id /* block */ tls_secret_update_block;
    id /* block */ tls_encryption_level_update_block;
    NSObject<OS_dispatch_queue> *tls_encryption_level_update_queue;
    NSMutableArray *spki;
    NSObject<OS_dispatch_data> *quic_transport_parameters;
    int application_transport;
    NSObject<OS_xpc_object> *application_protocols;
    NSString *server_name;
    unsigned char new_session_ticket_request;
    unsigned char resumed_session_ticket_request;
    BOOL enable_tls_keylog;
    BOOL started_handshake;
    BOOL connected;
    BOOL sent_error;
    _TtC10nwswifttls14STLSHandshaker *handshaker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
