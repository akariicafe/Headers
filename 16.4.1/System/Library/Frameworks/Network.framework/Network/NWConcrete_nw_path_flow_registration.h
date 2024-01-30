@class NSString, NSObject, NWConcrete_nw_path_evaluator;
@protocol OS_nw_array;

@interface NWConcrete_nw_path_flow_registration : NSObject <OS_nw_path_flow_registration> {
    NWConcrete_nw_path_evaluator *parent_evaluator;
    NSObject<OS_nw_array> *subflow_registrations;
    unsigned char registration_id[16];
    unsigned char nexus_agent[16];
    struct necp_all_stats { union { struct necp_tcp_stats { struct necp_stats_hdr { unsigned int x0; unsigned int x1; unsigned long long x2; } x0; struct necp_stat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x1; struct necp_basic_metadata { unsigned int x0; unsigned int x1; } x2; struct necp_extra_tcp_metadata { struct necp_connection_probe_status { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; } x3; } x0; struct necp_udp_stats { struct necp_stats_hdr { unsigned int x0; unsigned int x1; unsigned long long x2; } x0; struct necp_stat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x1; struct necp_basic_metadata { unsigned int x0; unsigned int x1; } x2; } x1; struct necp_quic_stats { struct necp_udp_stats { struct necp_stats_hdr { unsigned int x0; unsigned int x1; unsigned long long x2; } x0; struct necp_stat_counts { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x1; struct necp_basic_metadata { unsigned int x0; unsigned int x1; } x2; } x0; struct necp_extra_quic_metadata { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8[16]; } x1; } x2; } x0; } *flow_stats_area;
    struct ifnet_stats_per_flow { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; } *flow_interface_stats;
    const struct sk_nexusadv { } *advisory;
    struct nw_protocol_identifier { char x0[32]; int x1; int x2; } *upper_transport_stats_protocol;
    struct nw_protocol_identifier { char x0[32]; int x1; int x2; } *transport_stats_protocol;
    struct nw_protocol_identifier { char x0[32]; int x1; int x2; } *internet_stats_protocol;
    void *upper_transport_stats_region;
    void *transport_stats_region;
    void *internet_stats_region;
    unsigned int override_traffic_class;
    unsigned char registered : 1;
    unsigned char partial_checksum_offload : 1;
    unsigned char uses_nexus : 1;
    unsigned char override_is_expensive : 1;
    unsigned char override_is_constrained : 1;
    unsigned char override_uses_wifi : 1;
    unsigned char override_uses_cellular : 1;
    unsigned char override_reason : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
