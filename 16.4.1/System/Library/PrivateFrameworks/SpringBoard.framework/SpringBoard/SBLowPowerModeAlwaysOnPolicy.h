@class NSString, BLSAssertion;

@interface SBLowPowerModeAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy> {
    BLSAssertion *_alwaysOnDisabledAssertion;
}

@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive;
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id analyticsPolicyValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
