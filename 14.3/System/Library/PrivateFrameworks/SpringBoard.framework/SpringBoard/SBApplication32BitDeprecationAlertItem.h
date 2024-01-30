@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem

@property (weak, nonatomic) SBApplication *associatedDisplay;

- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)_title;
- (BOOL)dismissOnLock;
- (id)_message;

@end
