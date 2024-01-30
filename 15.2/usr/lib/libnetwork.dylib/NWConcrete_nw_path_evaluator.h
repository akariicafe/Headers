@class NSString, NWConcrete_nw_path, NSObject;
@protocol OS_nw_advertise_descriptor, OS_dispatch_queue, OS_nw_endpoint, OS_nw_parameters, OS_nw_browse_descriptor, OS_nw_group_descriptor;

@interface NWConcrete_nw_path_evaluator : NSObject <OS_nw_path_evaluator> {
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_group_descriptor> *group_descriptor;
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    NWConcrete_nw_path *path;
    NSObject<OS_dispatch_queue> *client_queue;
    id /* block */ update_block;
    id /* block */ cancel_handler;
    unsigned char client_id[16];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int flow_count;
    unsigned short custom_ethertype;
    unsigned char custom_ip_protocol;
    unsigned char is_default : 1;
    unsigned char is_listener : 1;
    unsigned char is_interpose : 1;
    unsigned char started : 1;
    unsigned char cancelled : 1;
    unsigned char logging : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)redactedDescription;
- (void)dealloc;

@end
