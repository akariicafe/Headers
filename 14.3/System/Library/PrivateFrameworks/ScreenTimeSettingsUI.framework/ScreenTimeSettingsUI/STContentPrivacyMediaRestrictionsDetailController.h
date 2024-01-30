@class NSObject;
@protocol STContentPrivacyViewModelCoordinator;

@interface STContentPrivacyMediaRestrictionsDetailController : PSListController

@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setItemSpecifierValue:(id)a0 specifier:(id)a1;
- (id)getItemSpecifierValue:(id)a0;
- (id)defaultLinkListSpecifierWithConfiguration:(id)a0 key:(id)a1;
- (id)radioGroupSpecifierWithName:(id)a0 footerText:(id)a1 item:(id)a2;
- (id)defaultLinkListSpecifierWithConfiguration:(id)a0 key:(id)a1 titlesByValue:(id)a2 sortByTitle:(BOOL)a3;
- (id)defaultSwitchSpecifierWithConfiguration:(id)a0 key:(id)a1;
- (void)showWebFilterRestrictions:(id)a0;
- (id)defaultLinkListSpecifierWithItem:(id)a0 titlesByValue:(id)a1 sortByTitle:(BOOL)a2;

@end
