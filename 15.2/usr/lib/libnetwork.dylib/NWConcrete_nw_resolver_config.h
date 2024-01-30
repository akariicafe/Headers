@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_source, OS_nw_fd_wrapper;

@interface NWConcrete_nw_resolver_config : NSObject <OS_nw_resolver_config> {
    NSObject<OS_xpc_object> *dictionary;
    unsigned char identifier[16];
    NSObject<OS_dispatch_source> *kernel_event_source;
    NSObject<OS_nw_fd_wrapper> *kernel_event_wrapper;
    NSObject<OS_nw_fd_wrapper> *agent_fd;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int generation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
