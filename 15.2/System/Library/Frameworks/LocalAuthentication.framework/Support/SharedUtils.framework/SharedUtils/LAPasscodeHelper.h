@class NSMutableDictionary;

@interface LAPasscodeHelper : NSObject {
    NSMutableDictionary *_failedAttemptsDictionary;
    NSMutableDictionary *_backoffEndTimeDictionary;
}

+ (id)sharedInstance;

- (long long)failedAttemptsForUserID:(id)a0;
- (unsigned int)_keybagHandleForUserId:(id)a0;
- (double)backoffTimeIntervalForUserID:(id)a0;
- (BOOL)accountBlockedForUserID:(id)a0;
- (id)_passwordPolicyStatusForUserID:(id)a0;
- (BOOL)isPasscodeSetWithError:(id *)a0;
- (void)_increaseFailedAttemptCountForUserID:(id)a0;
- (long long)verifyPasswordUsingPAM:(id)a0 userID:(id)a1 pamService:(id)a2 pamUser:(id)a3 pamToken:(id)a4;
- (long long)createStash:(id)a0 mode:(int)a1 manifest:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (long long)passcodeScreenStyleWithPolicy:(long long)a0 options:(id)a1 darkInterface:(BOOL)a2;
- (long long)verifyPasswordUsingAKS:(id)a0 acmContext:(id)a1 userId:(id)a2 policy:(long long)a3 options:(id)a4;
- (void)_resetFailedAttemptCountForUserID:(id)a0;
- (long long)maxUnlockAttemptsForUserID:(id)a0;
- (id)_currentUserID;

@end
