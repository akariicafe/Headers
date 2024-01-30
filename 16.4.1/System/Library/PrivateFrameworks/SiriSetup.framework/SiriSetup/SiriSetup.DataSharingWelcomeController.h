@interface SiriSetup.DataSharingWelcomeController : OBWelcomeController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ orbView;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)shareTapped;
- (void)aboutDataSharingTapped;
- (void)notNowTapped;

@end
