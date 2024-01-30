@interface _SBDMPolicyTestAppInfo : SBApplicationInfo

@property (nonatomic) BOOL testAppBlocked;

- (long long)screenTimePolicy;
- (BOOL)isBlockedForScreenTimeExpiration;

@end
