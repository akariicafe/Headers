@interface HKImproveSafetyDataCollectionViewController : OBTextWelcomeController

@property (copy, nonatomic) id /* block */ completion;

+ (id)localizedStringWithKey:(id)a0;
+ (id)localizedStringWithKey:(id)a0 hasMaskedVariant:(BOOL)a1;
+ (BOOL)needsRequestedPermission;
+ (void)presentInViewController:(id)a0 completion:(id /* block */)a1;

- (void)viewDidLoad;
- (id)localizedStringWithKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldInlineButtonTray;
- (void)_disableDataCollection;
- (void)_enableDataCollection;
- (void)_setDataCollectionToNewValue:(BOOL)a0;
- (void)_showDataCollectionAdditionalInfo;
- (id)localizedStringWithKey:(id)a0 hasMaskedVariant:(BOOL)a1;
- (void)setUpButtons;
- (void)setUpContent;

@end
