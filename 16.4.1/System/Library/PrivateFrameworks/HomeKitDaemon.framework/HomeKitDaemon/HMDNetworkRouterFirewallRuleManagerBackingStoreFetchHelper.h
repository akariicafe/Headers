@class HMBProcessingOptions, NSString, NAPromise, CKOperationGroup, NSDate, HMFActivity;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper : HMFObject <HMFLogging> {
    NAPromise *_promise;
}

@property (class, readonly, nonatomic) unsigned long long maxRetryCount;
@property (class, readonly, nonatomic) unsigned long long maxOperationDurationSeconds;

@property (readonly, nonatomic) HMFActivity *activity;
@property (readonly, nonatomic) HMBProcessingOptions *options;
@property (readonly, nonatomic) CKOperationGroup *operationGroup;
@property (nonatomic) BOOL shouldRetry;
@property (nonatomic) double retryIntervalSeconds;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSDate *operationStartTime;
@property (readonly, nonatomic) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)__integerForPreferenceKey:(id)a0 defaultValue:(unsigned long long)a1;

- (void)finishWithError:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)finishWithResult:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0 options:(id)a1 container:(id)a2 useAnonymousRequests:(BOOL)a3 promise:(id)a4;

@end
