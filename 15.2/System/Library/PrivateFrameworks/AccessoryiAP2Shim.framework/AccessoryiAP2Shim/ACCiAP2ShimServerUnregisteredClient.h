@class NSString;

@interface ACCiAP2ShimServerUnregisteredClient : NSObject

@property (readonly, nonatomic) struct SBSProcessAssertion { } *processAssertion;
@property (readonly, nonatomic) long long processAssertionStartTime;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) int processId;

- (void)releaseProcessAssertion;
- (id)initWithBundleId:(id)a0;
- (void).cxx_destruct;
- (int)_getProcessId;
- (id)_applicationInfoForBundleIDSync:(id)a0;
- (void)takeProcessAssertion:(id)a0;

@end
