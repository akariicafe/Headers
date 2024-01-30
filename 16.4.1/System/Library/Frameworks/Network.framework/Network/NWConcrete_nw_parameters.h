@class NWConcrete_nw_protocol_stack, NSString, NSObject, NWConcrete_nw_path_parameters;
@protocol OS_dispatch_data, OS_xpc_object, OS_nw_proxy_config, OS_nw_endpoint, OS_nw_array;

@interface NWConcrete_nw_parameters : NSObject <OS_nw_parameters> {
    struct { unsigned char parent_id[16]; unsigned char listener_uuid[16]; struct { unsigned int val[8]; } e_audit_token; unsigned long long expected_workload; unsigned long long channel_teardown_delay; unsigned int sleep_keepalive_interval; unsigned char data_mode; unsigned char ecn_mode; unsigned char service_class; unsigned char expired_dns_behavior; unsigned char dry_run : 1; unsigned char no_opaque_proxy : 1; unsigned char fast_open_enabled : 1; unsigned char use_long_outstanding_queries : 1; unsigned char ignore_resolver_stats : 1; unsigned char resolve_ptr : 1; unsigned char indefinite : 1; unsigned char indefinite_set : 1; unsigned char reuse_local_address : 1; unsigned char receive_any_interface : 1; unsigned char is_probe : 1; unsigned char custom_protocols_only : 1; unsigned char bundle_id_to_uuid_mapping_failed : 1; unsigned char pid_to_uuid_mapping_failed : 1; unsigned char local_only : 1; unsigned char server : 1; unsigned char is_fallback : 1; unsigned char no_fullstack_fallback : 1; unsigned char desperate_ivan : 1; unsigned char allow_unusable_addresses : 1; unsigned char https_proxy_is_opaque : 1; unsigned char https_proxy_over_tls : 1; unsigned char attach_protocol_listener : 1; unsigned char prohibit_joining_protocols : 1; unsigned char allow_joining_connected_fd : 1; unsigned char multipath_force_enable : 1; unsigned char allow_duplicate_state_updates : 1; unsigned char always_open_listener_socket : 1; unsigned char never_open_listener_socket : 1; unsigned char disable_listener_datapath : 1; unsigned char requires_dnssec_validation : 1; unsigned char parent_is_known_tracker : 1; unsigned char prohibit_encrypted_dns : 1; unsigned char block_trackers : 1; unsigned char tls_should_trust_invalid_certificates : 1; unsigned char skip_probe_sampling : 1; unsigned int __pad_bits : 28; } value;
    NWConcrete_nw_path_parameters *path_parameters;
    char *e_bundle_id;
    char *proxy_bundle_id;
    NSObject<OS_xpc_object> *tls_session_id;
    NSObject<OS_xpc_object> *extra_parent_ids;
    NSObject<OS_dispatch_data> *initial_data_payload;
    NWConcrete_nw_protocol_stack *default_stack;
    NSObject<OS_nw_array> *transforms;
    NSObject<OS_nw_array> *proxy_options;
    NSObject<OS_nw_array> *custom_proxy_configs;
    NSObject<OS_nw_proxy_config> *effective_proxy_config;
    NSObject<OS_nw_endpoint> *url_endpoint;
    NSObject<OS_xpc_object> *metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
