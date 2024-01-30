@class NSString, BSProcessHandle, SBApplication;

@interface SBLockScreenUnlockRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int source;
@property (nonatomic) int intent;
@property (retain, nonatomic) BSProcessHandle *process;
@property (retain, nonatomic) SBApplication *destinationApplication;
@property (nonatomic) BOOL wantsBiometricPresentation;
@property (nonatomic) BOOL forceAlertAuthenticationUI;
@property (nonatomic) BOOL confirmedNotInPocket;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
