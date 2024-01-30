@class NSString, BLSAssertion;

@interface SBSetupAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy> {
    BLSAssertion *_alwaysOnDisabledAssertion;
}

@property (nonatomic, getter=_isInSetupMode, setter=_setInSetupMode:) BOOL inSetupMode;
@property (readonly, nonatomic, getter=isAlwaysOnPolicyActive) BOOL alwaysOnPolicyActive;
@property (readonly, copy, nonatomic) NSString *analyticsPolicyName;
@property (readonly, copy, nonatomic) id analyticsPolicyValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
