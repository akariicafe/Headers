@class NSString, NSObject;
@protocol OS_nw_endpoint;

@interface NWConcrete_nw_resolution_report : NSObject <OS_nw_resolution_report> {
    unsigned long long milliseconds;
    NSObject<OS_nw_endpoint> *successful_endpoint;
    NSObject<OS_nw_endpoint> *preferred_endpoint;
    unsigned int endpoint_count;
    int source;
    int protocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
