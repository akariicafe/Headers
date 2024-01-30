@class NSString, NSObject;
@protocol OS_xpc_object;

@interface NWConcrete_nw_ws_response : NSObject <OS_nw_ws_response> {
    int status;
    char *selected_subprotocol;
    NSObject<OS_xpc_object> *header_names;
    NSObject<OS_xpc_object> *header_values;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
