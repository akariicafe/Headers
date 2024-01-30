@class NSString;

@interface SBFLockScreenActionContext : NSObject {
    double _fontSize;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *lockLabel;
@property (retain, nonatomic) NSString *shortLockLabel;
@property (copy, nonatomic) NSString *unlockDestination;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL requiresUIUnlock;
@property (nonatomic) BOOL deactivateAwayController;
@property (nonatomic) BOOL canBypassPinLock;
@property (nonatomic) BOOL requiresAuthentication;
@property (nonatomic) BOOL wantsBiometricPresentation;
@property (nonatomic) BOOL confirmedNotInPocket;
@property (nonatomic) int source;
@property (nonatomic) int intent;
@property (readonly, nonatomic) BOOL hasCustomUnlockLabel;

- (void).cxx_destruct;
- (id)initWithLockLabel:(id)a0 shortLockLabel:(id)a1 action:(id /* block */)a2 identifier:(id)a3;

@end
