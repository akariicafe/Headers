@class NWConcrete_nw_protocol_stack, NSString, NSObject, NWConcrete_nw_path_parameters;
@protocol OS_dispatch_data, OS_xpc_object, OS_nw_endpoint, OS_nw_array;

@interface NWConcrete_nw_parameters : NSObject <OS_nw_parameters> {
    struct { unsigned char parent_id[16]; struct { unsigned int val[8]; } e_audit_token; unsigned long long expected_workload; int data_mode; int ecn_mode; int service_class; int expired_dns_behavior; unsigned int sleep_keepalive_interval; unsigned char dry_run : 1; unsigned char no_opaque_proxy : 1; unsigned char fast_open_enabled : 1; unsigned char use_long_outstanding_queries : 1; unsigned char ignore_resolver_stats : 1; unsigned char resolve_ptr : 1; unsigned char indefinite : 1; unsigned char indefinite_set : 1; unsigned char reuse_local_address : 1; unsigned char receive_any_interface : 1; unsigned char is_probe : 1; unsigned char custom_protocols_only : 1; unsigned char bundle_id_to_uuid_mapping_failed : 1; unsigned char pid_to_uuid_mapping_failed : 1; unsigned char local_only : 1; unsigned char server : 1; unsigned char is_fallback : 1; unsigned char no_fullstack_fallback : 1; unsigned char desperate_ivan : 1; unsigned char allow_unusable_addresses : 1; unsigned char https_proxy_is_opaque : 1; unsigned char https_proxy_over_tls : 1; unsigned char attach_protocol_listener : 1; unsigned char prohibit_joining_protocols : 1; unsigned char allow_joining_connected_fd : 1; unsigned char multipath_force_enable : 1; unsigned char allow_duplicate_state_updates : 1; unsigned char always_open_listener_socket : 1; unsigned char disable_listener_datapath : 1; unsigned char tls_should_trust_invalid_certificates : 1; unsigned char skip_probe_sampling : 1; unsigned char __pad_bits : 1; } value;
    NWConcrete_nw_path_parameters *path_parameters;
    char *e_bundle_id;
    char *proxy_bundle_id;
    NSObject<OS_xpc_object> *tls_session_id;
    NSObject<OS_xpc_object> *proxy_configuration;
    NSObject<OS_xpc_object> *effective_proxy_settings;
    NSObject<OS_xpc_object> *extra_parent_ids;
    NSObject<OS_dispatch_data> *initial_data_payload;
    NWConcrete_nw_protocol_stack *default_stack;
    NSObject<OS_nw_array> *proxy_options;
    NSObject<OS_nw_endpoint> *url_endpoint;
    NSObject<OS_xpc_object> *metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
