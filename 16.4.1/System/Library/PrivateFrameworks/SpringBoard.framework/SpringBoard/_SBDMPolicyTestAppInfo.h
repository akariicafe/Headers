@interface _SBDMPolicyTestAppInfo : SBApplicationInfo

@property (nonatomic) BOOL testAppBlocked;

- (BOOL)isBlockedForScreenTimeExpiration;
- (long long)screenTimePolicy;

@end
