@interface SBFMutableMobileKeyBagState : SBFMobileKeyBagState

@property (nonatomic) long long lockState;
@property (nonatomic) double backOffTime;
@property (nonatomic) unsigned long long failedAttemptCount;
@property (nonatomic) BOOL permanentlyBlocked;
@property (nonatomic) BOOL shouldWipe;
@property (nonatomic) BOOL recoveryEnabled;
@property (nonatomic) BOOL recoveryRequired;
@property (nonatomic) BOOL recoveryPossible;
@property (nonatomic) long long escrowCount;

- (void)setLockState:(long long)a0;
- (id)_mutableState;
- (void)setShouldWipe:(BOOL)a0;
- (void)setRecoveryEnabled:(BOOL)a0;
- (id)initWithMKBLockStateInfo:(id)a0;
- (void)setFailedAttemptCount:(unsigned long long)a0;
- (void)setPermanentlyBlocked:(BOOL)a0;
- (void)setRecoveryRequired:(BOOL)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBackOffTime:(double)a0;
- (void)setRecoveryPossible:(BOOL)a0;
- (void)setEscrowCount:(long long)a0;

@end
