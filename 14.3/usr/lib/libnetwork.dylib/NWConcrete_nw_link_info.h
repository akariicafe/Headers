@class NSString;

@interface NWConcrete_nw_link_info : NSObject <OS_nw_link_info> {
    int flow_control_status;
    unsigned char link_quality;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;

@end
