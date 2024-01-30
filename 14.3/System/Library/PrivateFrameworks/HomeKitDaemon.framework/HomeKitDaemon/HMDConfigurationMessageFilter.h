@interface HMDConfigurationMessageFilter : HMFMessageFilter

+ (id)policyClasses;
+ (BOOL)canInitWithMessage:(id)a0;

- (BOOL)acceptWithPolicies:(id)a0 error:(id *)a1;

@end
