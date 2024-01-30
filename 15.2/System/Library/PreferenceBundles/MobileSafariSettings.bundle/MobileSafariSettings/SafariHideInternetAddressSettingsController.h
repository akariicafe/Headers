@class NSIndexPath;

@interface SafariHideInternetAddressSettingsController : SafariSettingsListController {
    NSIndexPath *_currentCheckmarkIndexPath;
}

+ (id)_hideInternetAddressOptionList;
+ (unsigned long long)_hideInternetAddressIndexForState:(unsigned long long)a0;
+ (unsigned long long)_hideInternetAddressStateForIndex:(unsigned long long)a0;

- (id)specifiers;
- (void).cxx_destruct;
- (void)learnMore;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
