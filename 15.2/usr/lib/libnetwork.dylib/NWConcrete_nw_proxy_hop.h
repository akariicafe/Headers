@class NSString, NSObject;
@protocol OS_nw_protocol_options, OS_nw_endpoint;

@interface NWConcrete_nw_proxy_hop : NSObject <OS_nw_proxy_hop> {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_protocol_options> *options;
    struct __CFArray { } *raw_public_keys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
