@class NSString, NSObject;
@protocol OS_nw_endpoint_handler, OS_nw_write_request, OS_nw_read_request, OS_dispatch_group, OS_nw_context, OS_nw_parameters, OS_nw_endpoint, OS_dispatch_queue, OS_dispatch_workloop, OS_nw_array, OS_nw_establishment_report;

@interface NWConcrete_nw_connection : NSObject <OS_nw_connection> {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_dispatch_queue> *request_queue;
    NSObject<OS_dispatch_workloop> *workloop;
    NWConcrete_nw_connection *_internal_reference;
    unsigned long long start_time;
    int state;
    struct netcore_stats_tcp_report { union { struct { struct netcore_stats_tcp_statistics_report { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; int x33; int x34; int x35; unsigned char x36 : 1; unsigned char x37 : 1; unsigned char x38 : 1; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; unsigned char x42 : 1; unsigned char x43 : 1; unsigned char x44 : 1; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 5; unsigned char x48[6]; } x0; struct netcore_stats_tcp_cell_fallback_report { struct netcore_stats_network_event { int x0; unsigned int x1; } x0[20]; struct netcore_stats_data_usage_snapshot { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; } x1[20]; int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned char x7[7]; } x1; struct netcore_stats_tcp_statistics_report { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; int x33; int x34; int x35; unsigned char x36 : 1; unsigned char x37 : 1; unsigned char x38 : 1; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; unsigned char x42 : 1; unsigned char x43 : 1; unsigned char x44 : 1; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 5; unsigned char x48[6]; } x2[8]; int x3; unsigned int x4; } x0; struct nw_connection_report_s { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; int x45; unsigned char x46; unsigned char x47; unsigned char x48[16]; unsigned char x49[16]; unsigned char x50[50][16]; char x51[256]; char x52[256]; unsigned char x53[2]; struct nw_connection_protocol_establishment_report_s { char x0[32]; unsigned long long x1; unsigned long long x2; int x3; unsigned char x4[4]; } x54[10]; unsigned char x55 : 1; unsigned char x56 : 1; unsigned char x57 : 1; unsigned char x58 : 1; unsigned char x59 : 1; unsigned char x60 : 1; unsigned char x61 : 1; unsigned char x62 : 1; unsigned char x63 : 1; unsigned char x64 : 1; unsigned char x65 : 1; unsigned char x66 : 1; unsigned char x67 : 1; unsigned char x68 : 1; unsigned char x69 : 1; unsigned char x70 : 1; unsigned char x71 : 1; unsigned char x72 : 1; unsigned char x73 : 1; unsigned char x74 : 1; unsigned char x75 : 1; unsigned char x76 : 1; unsigned char x77 : 1; unsigned char x78 : 1; unsigned char x79 : 1; unsigned char x80 : 1; unsigned char x81 : 1; unsigned char x82 : 1; unsigned char x83 : 1; unsigned char x84 : 1; unsigned char x85 : 2; unsigned char x86[4]; } x1; } x0; BOOL x1; BOOL x2; unsigned char x3[6]; } *stats_report;
    int stats_reason;
    unsigned char should_report_stats : 1;
    unsigned char stats_reported : 1;
    unsigned char should_report_generic_stats : 1;
    unsigned char generic_stats_reported : 1;
    unsigned char hit_max_timestamps : 1;
    unsigned char should_report_activities : 1;
    unsigned char initial_writes_are_non_idempotent : 1;
    unsigned char should_report_probe_parent_stats : 1;
    unsigned char should_report_probe_stats : 1;
    unsigned char attempted_probe : 1;
    NSObject<OS_nw_write_request> *batched_sends;
    NSObject<OS_nw_read_request> *batched_receives;
    BOOL cancelled;
    BOOL prohibit_set_queue;
    BOOL batching;
    int alternate_path_state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSObject<OS_nw_endpoint_handler> *parent_endpoint_handler;
    NSObject<OS_nw_endpoint_handler> *connected_endpoint_handler;
    NSObject<OS_nw_array> *candidate_endpoint_handlers;
    NSObject<OS_nw_endpoint_handler> *transport_endpoint_handler;
    NSObject<OS_nw_write_request> *initial_write_requests;
    NSObject<OS_nw_read_request> *initial_read_requests;
    NSObject<OS_nw_endpoint_handler> *dry_run_endpoint_handler;
    NSObject<OS_nw_endpoint_handler> *ready_dry_run_endpoint_handler;
    unsigned int client_qos_class;
    NSObject<OS_dispatch_queue> *client_queue;
    id /* block */ client_handler;
    id /* block */ cancel_handler;
    id /* block */ viability_changed_handler;
    id /* block */ better_path_available_handler;
    id /* block */ alternate_path_state_handler;
    id /* block */ path_changed_handler;
    id /* block */ read_close_handler;
    id /* block */ write_close_handler;
    unsigned int adaptive_read_timeout_count;
    id /* block */ adaptive_read_timeout_handler;
    unsigned int adaptive_write_timeout_count;
    id /* block */ adaptive_write_timeout_handler;
    unsigned int excessive_keepalive_count;
    unsigned int excessive_keepalive_interval;
    id /* block */ excessive_keepalive_handler;
    struct metadata_changed_registration_list_s { struct nw_connection_metadata_changed_registration *tqh_first; struct nw_connection_metadata_changed_registration **tqh_last; } metadata_changed_registration_list;
    unsigned int interface_time_delta;
    unsigned int connected_fallback_generation;
    unsigned long long pending_expected_progress_target;
    unsigned long long estimated_bytes_download;
    unsigned long long estimated_bytes_upload;
    struct nw_connection_timestamp_s { unsigned long long x0; struct nw_endpoint_handler_event_s { unsigned short x0; unsigned short x1; } x1; union { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; } x1; } x2; unsigned char x3[0]; } *timestamps;
    unsigned short num_timestamps;
    unsigned short used_timestamps;
    NSObject<OS_nw_array> *attempted_endpoints;
    struct nw_connection_throughput_monitor_s { unsigned long long current_bytes; unsigned long long current_time; unsigned long long last_bytes; unsigned long long last_time; void *timer; unsigned int minimum; unsigned char __pad[4]; } throughput_monitor;
    id /* block */ low_throughput_handler;
    NSObject<OS_nw_array> *activities;
    NSObject<OS_nw_array> *probes;
    NSObject<OS_dispatch_group> *cancel_group;
    NSObject<OS_nw_establishment_report> *establishment_report;
    NSObject<OS_nw_array> *data_transfer_reports;
    NSObject<OS_nw_array> *errors;
    unsigned int top_id;
    unsigned char top_uuid[16];
    unsigned char parent_uuid[16];
    unsigned char logging_sequence_number;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
