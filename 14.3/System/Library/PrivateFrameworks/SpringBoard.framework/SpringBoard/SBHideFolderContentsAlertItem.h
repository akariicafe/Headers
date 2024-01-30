@class NSString, SBIcon;

@interface SBHideFolderContentsAlertItem : SBAlertItem

@property (readonly, nonatomic) SBIcon *icon;
@property (readonly, copy, nonatomic) NSString *iconLocation;

- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (void)didActivate;
- (id)initWithIcon:(id)a0 location:(id)a1;

@end
