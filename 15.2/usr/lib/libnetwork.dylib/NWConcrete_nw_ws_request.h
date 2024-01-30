@class NSString, NSObject;
@protocol OS_xpc_object;

@interface NWConcrete_nw_ws_request : NSObject <OS_nw_ws_request> {
    NSObject<OS_xpc_object> *subprotocols;
    NSObject<OS_xpc_object> *header_names;
    NSObject<OS_xpc_object> *header_values;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
