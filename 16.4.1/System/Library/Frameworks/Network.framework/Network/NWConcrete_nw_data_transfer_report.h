@class NSString, NWConcrete_nw_connection, NSObject;
@protocol OS_nw_interface;

@interface NWConcrete_nw_data_transfer_report : NSObject <OS_nw_data_transfer_report> {
    unsigned long long start_time;
    unsigned long long duration_milliseconds;
    NWConcrete_nw_connection *connection;
    NSObject<OS_nw_interface> *currently_collecting_interface;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int path_count;
    unsigned int allocated_path_count;
    int state;
    struct nw_data_transfer_path_report { struct nw_data_transfer_path_report_value { unsigned long long received_ip_packet_count; unsigned long long sent_ip_packet_count; unsigned long long received_transport_byte_count; unsigned long long received_transport_duplicate_byte_count; unsigned long long received_transport_out_of_order_byte_count; unsigned long long sent_transport_byte_count; unsigned long long sent_transport_retransmitted_byte_count; unsigned long long transport_smoothed_rtt_milliseconds; unsigned long long transport_minimum_rtt_milliseconds; unsigned long long transport_rtt_variance; unsigned long long transport_congestion_window; unsigned long long transport_slow_start_threshold; unsigned long long received_application_byte_count; unsigned long long sent_application_byte_count; unsigned char __pad[0]; } total; struct nw_data_transfer_path_report_value { unsigned long long received_ip_packet_count; unsigned long long sent_ip_packet_count; unsigned long long received_transport_byte_count; unsigned long long received_transport_duplicate_byte_count; unsigned long long received_transport_out_of_order_byte_count; unsigned long long sent_transport_byte_count; unsigned long long sent_transport_retransmitted_byte_count; unsigned long long transport_smoothed_rtt_milliseconds; unsigned long long transport_minimum_rtt_milliseconds; unsigned long long transport_rtt_variance; unsigned long long transport_congestion_window; unsigned long long transport_slow_start_threshold; unsigned long long received_application_byte_count; unsigned long long sent_application_byte_count; unsigned char __pad[0]; } incremental; NSObject<OS_nw_interface> *interface; unsigned char __pad[0]; } primary_path;
    struct nw_data_transfer_path_report { struct nw_data_transfer_path_report_value { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned char x14[0]; } x0; struct nw_data_transfer_path_report_value { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned char x14[0]; } x1; id x2; unsigned char x3[0]; } *secondary_paths;
    unsigned char collection_in_progress : 1;
    unsigned char __pad_bits : 7;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
