@class NSString, NSObject;
@protocol OS_xpc_object, OS_nw_endpoint, OS_nw_interface, OS_nw_protocol_options, OS_nw_array;

@interface NWConcrete_nw_path_flow : NSObject <OS_nw_path_flow> {
    void *nexus_key;
    NSObject<OS_nw_interface> *interface;
    NSObject<OS_xpc_object> *nexus_agent;
    NSObject<OS_nw_endpoint> *local_endpoint;
    NSObject<OS_nw_endpoint> *remote_endpoint;
    NSObject<OS_nw_array> *discovered_endpoints;
    NSObject<OS_nw_array> *resolved_endpoints;
    NSObject<OS_nw_protocol_options> *assigned_protocol;
    struct necp_client_result_netagent { unsigned int generation; unsigned char netagent_uuid[16]; } nexus_agent_struct;
    struct necp_client_result_interface { unsigned int generation; unsigned int index; } interface_struct;
    unsigned char tfo_cookie[16];
    unsigned char nexus_instance[16];
    unsigned char flow_id[16];
    unsigned int nexus_key_length;
    unsigned int nexus_flow_index;
    unsigned int nexus_port;
    unsigned int ctl_command_code;
    unsigned int ctl_command_value;
    unsigned int ctl_command_tcp_seq_num;
    unsigned char tfo_cookie_len;
    unsigned char viable : 1;
    unsigned char assigned : 1;
    unsigned char ecn_enabled : 1;
    unsigned char fast_open_blocked : 1;
    unsigned char is_local : 1;
    unsigned char is_direct : 1;
    unsigned char has_ipv4 : 1;
    unsigned char has_ipv6 : 1;
    unsigned char has_nat64 : 1;
    unsigned char ctl_command_valid : 1;
    unsigned char defunct : 1;
    unsigned char is_custom_ip : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
