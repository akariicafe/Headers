@class NSString, NSObject;
@protocol OS_nw_channel, OS_dispatch_queue, OS_nw_interface;

@interface NWConcrete_nw_interface_status_monitor : NSObject <OS_nw_interface_status_monitor> {
    NSObject<OS_nw_interface> *interface;
    NSObject<OS_nw_channel> *channel;
    id /* block */ packet_handler;
    NSObject<OS_dispatch_queue> *packet_handler_queue;
    id /* block */ update_handler;
    NSObject<OS_dispatch_queue> *update_handler_queue;
    void *channel_event_source;
    void *interface_advisory_source;
    unsigned char cancelled : 1;
    unsigned char __pad_bits : 7;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
