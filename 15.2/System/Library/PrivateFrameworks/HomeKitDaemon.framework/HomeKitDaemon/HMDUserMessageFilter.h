@class NSString;

@interface HMDUserMessageFilter : HMFMessageFilter <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)canInitWithMessage:(id)a0;

- (BOOL)acceptWithPolicies:(id)a0 error:(id *)a1;

@end
