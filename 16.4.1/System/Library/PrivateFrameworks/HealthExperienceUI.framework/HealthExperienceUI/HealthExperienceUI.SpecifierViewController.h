@interface HealthExperienceUI.SpecifierViewController : PSListController {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shouldReloadSpecifiersAfterSelection;
    void /* unknown type, empty encoding */ shouldReloadSpecifiersOnViewWillAppear;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableViewStyle;
- (void)dismissNavigationController;

@end
