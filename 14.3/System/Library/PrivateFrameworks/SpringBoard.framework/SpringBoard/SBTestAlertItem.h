@class NSString;

@interface SBTestAlertItem : SBAlertItem

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldShowInLockScreen;
@property (nonatomic) BOOL forcesModalAlertAppearance;
@property (nonatomic) BOOL behavesSuperModally;
@property (nonatomic) BOOL allowMenuButtonDismissal;
@property (nonatomic) BOOL allowLockScreenDismissal;
@property (nonatomic) BOOL reappearsAfterUnlock;
@property (nonatomic) BOOL reappearsAfterLock;

+ (id)alertItemWithShowInLockScreen:(BOOL)a0 forcesModal:(BOOL)a1 superModal:(BOOL)a2;

- (void).cxx_destruct;
- (id)description;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;

@end
