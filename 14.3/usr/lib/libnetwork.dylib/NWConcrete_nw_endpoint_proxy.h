@class NSString, NWConcrete_nw_endpoint_handler, NSObject;
@protocol OS_xpc_object, OS_nw_array;

@interface NWConcrete_nw_endpoint_proxy : NSObject <OS_nw_endpoint_proxy> {
    NSObject<OS_nw_array> *child_endpoint_handlers;
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;
    unsigned int next_child_endpoint_index;
    NWConcrete_nw_endpoint_handler *connected_child;
    NSObject<OS_xpc_object> *proxy_settings;
    NSObject<OS_xpc_object> *parsed_proxy_settings;
    struct __CFURL { } *url;
    NSObject<OS_nw_array> *pac_resolvers;
    unsigned char direct_prohibited : 1;
    unsigned char synthesized_url : 1;
    unsigned char pac_failed_missing_url : 1;
    unsigned char overrode_to_https : 1;
    unsigned char has_pac : 1;
    unsigned char transport_finished : 1;
    unsigned char is_custom_proxy : 1;
    unsigned char is_pac_connection : 1;
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
