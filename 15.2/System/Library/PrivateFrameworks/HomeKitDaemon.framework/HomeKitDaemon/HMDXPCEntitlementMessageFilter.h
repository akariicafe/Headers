@class NSString;

@interface HMDXPCEntitlementMessageFilter : HMDXPCMessageFilter <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)acceptWithPolicies:(id)a0 error:(id *)a1;

@end
