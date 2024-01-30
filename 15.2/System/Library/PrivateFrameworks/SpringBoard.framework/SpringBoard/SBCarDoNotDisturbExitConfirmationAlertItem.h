@class NSString;

@interface SBCarDoNotDisturbExitConfirmationAlertItem : SBAlertItem <SiriUICarDNDDelegate>

@property (copy, nonatomic) id /* block */ notDrivingActionHandler;
@property (nonatomic) BOOL showSiriHeaderViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)reappearsAfterUnlock;
- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)controllerDidProvideContext:(id)a0;

@end
