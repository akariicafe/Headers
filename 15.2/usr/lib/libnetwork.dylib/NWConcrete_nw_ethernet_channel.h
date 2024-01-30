@class NSString, NSObject;
@protocol OS_nw_path_evaluator, OS_nw_context, OS_nw_interface, OS_nw_path_flow_registration, OS_dispatch_queue, OS_nw_path_flow;

@interface NWConcrete_nw_ethernet_channel : NSObject <OS_nw_ethernet_channel> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned short _ether_type;
    NSObject<OS_nw_interface> *_interface;
    const char *_interfaceName;
    int _state;
    NSObject<OS_dispatch_queue> *_client_queue;
    id /* block */ _client_state_handler;
    id /* block */ _client_receive_handler;
    NSObject<OS_nw_context> *_context;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSObject<OS_nw_path_flow_registration> *_registration;
    NSObject<OS_nw_path_flow> *_flow;
    unsigned char _flow_local_ethernet_address[6];
    void *_input_source;
    BOOL _input_suspended;
    BOOL _cancelled;
    BOOL _delay_cancel;
    unsigned char _nexusInstance[16];
    unsigned int _nexusPort;
    unsigned char _flowId[16];
    struct channel { } *_channel;
    struct channel_attr { } *_attributes;
    int _channel_fd;
    unsigned short _slot_size;
    struct channel_ring_desc { } *_rx_ring;
    struct channel_ring_desc { } *_tx_ring;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
