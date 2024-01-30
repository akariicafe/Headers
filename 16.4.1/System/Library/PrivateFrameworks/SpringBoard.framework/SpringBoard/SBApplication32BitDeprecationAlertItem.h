@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem

@property (weak, nonatomic) SBApplication *associatedDisplay;

- (id)initWithApplication:(id)a0;
- (id)_title;
- (void).cxx_destruct;
- (id)_message;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;

@end
