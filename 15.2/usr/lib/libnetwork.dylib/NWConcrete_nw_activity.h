@class NSString;

@interface NWConcrete_nw_activity : NSObject <OS_nw_activity> {
    unsigned char token[16];
    unsigned long long investigation_identifier;
    unsigned long long start_time;
    unsigned long long end_time;
    unsigned int fragments_quenched;
    NWConcrete_nw_activity *parent;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } description_lock;
    unsigned int label;
    unsigned int domain;
    unsigned int client_metric_count;
    int underlying_error_domain;
    int underlying_error_code;
    int reporting_strategy;
    int completion_reason;
    NSString *description;
    unsigned char is_retry : 1;
    unsigned char is_lightweight : 1;
    unsigned char activated : 1;
    unsigned char completed : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
