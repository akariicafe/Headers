@class NSString, NSObject;
@protocol OS_nw_path_parameters, OS_nw_path_evaluator, OS_nw_endpoint, OS_nw_path;

@interface NWConcrete_nw_association : NSObject <OS_nw_association> {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_path_parameters> *path_parameters;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_path> *previous_path;
    struct nw_hash_table { } *handles;
    struct nw_hash_table { } *connected_flow_handles;
    struct nw_hash_table { } *cache_entries;
    void *deactivation_timer;
    unsigned int dry_run_count;
    unsigned char dormant : 1;
    unsigned char in_force_update : 1;
    unsigned char __pad_bits : 6;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
