@interface HealthExperienceUI.SpecifierViewController : PSListController {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shouldReloadSpecifiersAfterSelection;
    void /* unknown type, empty encoding */ shouldReloadSpecifiersOnViewWillAppear;
}

- (void).cxx_destruct;
- (id)specifiers;
- (long long)tableViewStyle;
- (id)initWithCoder:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissNavigationController;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
