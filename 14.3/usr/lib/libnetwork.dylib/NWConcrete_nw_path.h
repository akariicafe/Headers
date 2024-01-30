@class NSString, NSObject;
@protocol OS_nw_advertise_descriptor, OS_nw_interface, OS_xpc_object, OS_nw_endpoint, OS_nw_parameters, OS_nw_browse_descriptor, OS_nw_array;

@interface NWConcrete_nw_path : NSObject <OS_nw_path> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    NSObject<OS_nw_array> *discovered_endpoints;
    NSObject<OS_nw_array> *resolved_endpoints;
    NSObject<OS_nw_array> *flows;
    NSObject<OS_nw_endpoint> *override_local_endpoint;
    NSObject<OS_nw_interface> *override_interface;
    NSObject<OS_nw_interface> *direct;
    NSObject<OS_nw_interface> *delegate;
    NSObject<OS_nw_interface> *fallback_interface;
    unsigned char client_id[16];
    unsigned char flow_registration_id[16];
    unsigned char fallback_agent[16];
    NSObject<OS_xpc_object> *fallback_agent_domains;
    NSObject<OS_xpc_object> *fallback_agent_types;
    NSObject<OS_nw_array> *resolver_configs;
    NSObject<OS_nw_array> *gateways;
    NSObject<OS_xpc_object> *network_agent_dictionary;
    NSObject<OS_xpc_object> *proxy_settings;
    char *reason_description;
    struct nw_path_necp_result { unsigned int routing_result; union { unsigned int tunnel_interface_index; unsigned int scoped_interface_index; unsigned int flow_divert_control_unit; unsigned int filter_control_unit; unsigned int pass_flags; unsigned int drop_flags; } routing_result_parameter; unsigned int filter_control_unit; unsigned int service_action; unsigned char service_uuid[16]; struct necp_client_result_netagent *netagents; struct necp_client_interface_option *interface_options; unsigned int service_flags; unsigned int service_data; unsigned int routed_interface_index; unsigned int direct_interface_index; unsigned int direct_interface_generation; unsigned int delegate_interface_index; unsigned int delegate_interface_generation; unsigned int policy_id; unsigned int num_interface_options; unsigned int num_netagents; unsigned int flow_divert_aggregate_unit; unsigned int padding; } policy_result;
    unsigned int effective_mtu;
    unsigned int effective_traffic_class;
    unsigned int interface_time_delta;
    unsigned int fallback_generation;
    int status;
    int reason;
    unsigned short custom_ethertype;
    unsigned char custom_ip_protocol;
    unsigned char recommended_mss;
    unsigned char weak_fallback : 1;
    unsigned char no_fallback_timer : 1;
    unsigned char fallback_is_forced : 1;
    unsigned char is_local : 1;
    unsigned char is_direct : 1;
    unsigned char has_ipv4 : 1;
    unsigned char has_ipv6 : 1;
    unsigned char traffic_mgmt_background : 1;
    unsigned char necp_satisfied : 1;
    unsigned char override_viable : 1;
    unsigned char changed_from_previous : 1;
    unsigned char probe_connectivity : 1;
    unsigned char link_quality_abort : 1;
    unsigned char checked_dns : 1;
    unsigned char is_listener : 1;
    unsigned char is_interpose : 1;
    unsigned char specific_listener : 1;
    unsigned char override_is_expensive : 1;
    unsigned char override_is_constrained : 1;
    unsigned char override_uses_wifi : 1;
    unsigned char override_uses_cellular : 1;
    unsigned char override_interface_scoped : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)dealloc;

@end
