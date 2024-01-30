@class PSLanguageSelector;

@interface PSInternationalLanguageSetupController : PSSetupController

@property (retain, nonatomic) PSLanguageSelector *languageSelector;

- (void)commit;
- (void)setupController;
- (void).cxx_destruct;
- (void)setLanguage:(id)a0 specifier:(id)a1;

@end
