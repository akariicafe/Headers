@interface _HPSUICarrySettingsViewController : HomePlatformSettingsUI.BaseExtensionViewController <HomePlatformSettingsUI.CarrySettingsClientInterface> {
    void /* unknown type, empty encoding */ homeID;
}

+ (void)shouldShowCarrySettingsButtonForHomeID:(id)a0 withCompletion:(id /* block */)a1;

- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithHomeID:(id)a0;

@end
