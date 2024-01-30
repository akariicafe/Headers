@interface GKDigestVerification : NSObject

+ (id)computeVerificationHashForDigest:(id)a0;
+ (BOOL)digest:(id)a0 matchesHash:(id)a1;
+ (id)digestForSubmitScore:(id)a0 forBundleID:(id)a1 shouldScreen:(BOOL)a2 eligibleChallenges:(id)a3;
+ (id)digestForSubmitAchievement:(id)a0 forBundleID:(id)a1 shouldScreen:(BOOL)a2 eligibleChallenges:(id)a3;

@end
