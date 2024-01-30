@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAPUploadPolicies : NSObject {
    NSObject<OS_dispatch_queue> *_isoQueue;
    NSMutableDictionary *_policyDict;
}

+ (id)sharedPolicies;

- (id)uploadPolicyForUploadPolicyType:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (double)ttlForUploadPolicyType:(int)a0;
- (void)_updatePolicyConfigForUploadPolicyConfigType:(int)a0 configKey:(struct { struct { unsigned int x0; void *x1; } x0; })a1;

@end
