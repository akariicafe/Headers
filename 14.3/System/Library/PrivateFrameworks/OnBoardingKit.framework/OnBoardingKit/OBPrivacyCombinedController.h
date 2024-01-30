@class NSString;

@interface OBPrivacyCombinedController : OBTableWelcomeController

@property BOOL allowsOpeningSafari;
@property (retain) NSString *displayLanguage;
@property BOOL presentedFromPrivacyPane;

+ (void)presentPrivacyCombinedControllerOverController:(id)a0 dismissHandler:(id /* block */)a1;
+ (id)new;

- (id)initWithIdentifiers:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;

@end
