@class NSString, NSObject;
@protocol OS_nw_content_context, OS_dispatch_data, OS_nw_endpoint, OS_nw_connection_group;

@interface NWConcrete_nw_connection_group_send_request : NSObject <OS_nw_connection_group_send_request> {
    NSObject<OS_nw_connection_group> *group;
    id /* block */ completion;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_dispatch_data> *data;
    NSObject<OS_nw_content_context> *context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
