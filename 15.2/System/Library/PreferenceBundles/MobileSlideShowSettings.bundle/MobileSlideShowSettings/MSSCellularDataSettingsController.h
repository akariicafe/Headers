@class PSSystemPolicyForApp, NSArray;

@interface MSSCellularDataSettingsController : PSListController {
    PSSystemPolicyForApp *_appPolicy;
    NSArray *_cellularSpecifiers;
    NSArray *_unlimitedUpdatesSpecifiers;
    NSArray *_invocations;
}

+ (BOOL)shouldShowCellularDataSettings;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)unlimitedUpdatesForSpecifier:(id)a0;
- (void)setUnlimitedUpdates:(id)a0 forSpecifier:(id)a1;
- (void)_validateUnlimitedUpdatesSpecifiers;

@end
