@interface HealthExperienceUI.SpecifierViewController : PSListController {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shouldReloadSpecifiersAfterSelection;
    void /* unknown type, empty encoding */ shouldReloadSpecifiersOnViewWillAppear;
}

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)tableViewStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dismissNavigationController;

@end
