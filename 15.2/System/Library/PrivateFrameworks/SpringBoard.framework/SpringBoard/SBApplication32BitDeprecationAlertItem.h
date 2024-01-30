@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem

@property (weak, nonatomic) SBApplication *associatedDisplay;

- (id)_message;
- (id)_title;
- (id)initWithApplication:(id)a0;
- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;

@end
