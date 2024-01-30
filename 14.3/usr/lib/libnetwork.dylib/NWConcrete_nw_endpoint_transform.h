@class NSString, NWConcrete_nw_endpoint_handler, NSObject;
@protocol OS_xpc_object, OS_nw_array, OS_nw_endpoint;

@interface NWConcrete_nw_endpoint_transform : NSObject <OS_nw_endpoint_transform> {
    NSObject<OS_nw_array> *child_endpoint_handlers;
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;
    NSObject<OS_xpc_object> *fallback_modes;
    NSObject<OS_nw_array> *blocked_protocols;
    unsigned int next_child_endpoint_index;
    NWConcrete_nw_endpoint_handler *connected_child;
    NSObject<OS_nw_endpoint> *primary_endpoint;
    void *child_timer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePathWithHandler:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)cancelWithHandler:(id)a0 forced:(BOOL)a1;
- (void)startWithHandler:(id)a0;
- (void)dealloc;
- (BOOL)applyWithHandler:(id)a0 toChildren:(id /* block */)a1;

@end
