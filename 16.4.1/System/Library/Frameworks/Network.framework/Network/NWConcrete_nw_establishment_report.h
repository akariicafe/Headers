@class NSString, NSObject;
@protocol OS_nw_array;

@interface NWConcrete_nw_establishment_report : NSObject <OS_nw_establishment_report> {
    unsigned long long attempt_started_after_milliseconds;
    unsigned long long duration_milliseconds;
    unsigned long long resolution_started_after_milliseconds;
    unsigned long long flow_started_after_milliseconds;
    NSObject<OS_nw_array> *proxy_endpoints;
    int privacy_stance;
    NSObject<OS_nw_array> *protocol_reports;
    NSObject<OS_nw_array> *resolution_reports;
    unsigned int previous_attempt_count;
    unsigned char proxy_configured : 1;
    unsigned char used_proxy : 1;
    unsigned char __pad_bits : 7;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
