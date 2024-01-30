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
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
