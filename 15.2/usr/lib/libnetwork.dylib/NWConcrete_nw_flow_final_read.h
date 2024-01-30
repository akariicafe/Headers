@class NSString, NSObject;
@protocol OS_nw_error, OS_dispatch_data, OS_nw_content_context;

@interface NWConcrete_nw_flow_final_read : NSObject <OS_nw_flow_final_read> {
    NSObject<OS_dispatch_data> *content;
    NSObject<OS_nw_content_context> *content_context;
    BOOL receive_single_message;
    BOOL is_complete;
    NSObject<OS_nw_error> *error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
