@class NSString, SBIcon;

@interface SBDeleteNonAppIconAlertItem : SBAlertItem

@property (readonly, nonatomic) SBIcon *icon;
@property (readonly, copy, nonatomic) NSString *iconLocation;

- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (void)didActivate;
- (id)initWithIcon:(id)a0 location:(id)a1;

@end
