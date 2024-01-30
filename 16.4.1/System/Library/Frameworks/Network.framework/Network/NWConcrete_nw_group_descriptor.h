@class NSString, NSObject;
@protocol OS_nw_array, OS_nw_endpoint;

@interface NWConcrete_nw_group_descriptor : NSObject <OS_nw_group_descriptor> {
    int type;
    unsigned char group_id[16];
    NSObject<OS_nw_array> *members;
    NSObject<OS_nw_endpoint> *specific_source;
    unsigned char disable_unicast_traffic : 1;
    unsigned char __pad_bits : 7;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
