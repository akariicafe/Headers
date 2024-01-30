@class STCoreUser, NSDate, NSObject;
@protocol OS_dispatch_source;

@interface STPINController : NSObject

@property (class, readonly) unsigned long long pinLength;

@property (readonly, nonatomic) STCoreUser *user;
@property (retain) NSObject<OS_dispatch_source> *backoffTimer;
@property (copy) NSDate *timeoutEndDate;
@property (readonly) BOOL canRecoveryAuthenticate;

- (id)initWithUser:(id)a0;
- (void).cxx_destruct;
- (void)removePIN:(id)a0 completionHandler:(id /* block */)a1;
- (void)_beginTimeoutUntilDate:(id)a0;
- (void)_setNewPIN:(id)a0 currentPIN:(id)a1 recoveryAppleIDPrompt:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)_isPINValid:(id)a0;
- (BOOL)_setPasscode:(id)a0 recoveryAppleID:(id)a1 forUser:(id)a2 error:(id *)a3;
- (BOOL)_saveChangesForUser:(id)a0 error:(id *)a1;
- (BOOL)_authenticateWithPIN:(id)a0 forUser:(id)a1 allowPasscodeRecovery:(BOOL)a2 error:(id *)a3;
- (void)authenticateWithPIN:(id)a0 allowPasscodeRecovery:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)_timeoutEndDateForAttemptNumber:(long long)a0;
- (void)setPIN:(id)a0 withRecoveryAppleIDPrompt:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)updatePIN:(id)a0 toPIN:(id)a1 withRecoveryAppleIDPrompt:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)authenticateWithPIN:(id)a0 error:(id *)a1;
- (void)authenticateWithPIN:(id)a0 completionHandler:(id /* block */)a1;

@end
