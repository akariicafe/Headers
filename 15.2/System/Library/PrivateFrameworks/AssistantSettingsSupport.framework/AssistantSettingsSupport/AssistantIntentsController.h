@class NSArray;

@interface AssistantIntentsController : PSListController <SiriAppsFooterViewDelegate>

@property (retain, nonatomic) NSArray *intentsSpecifiers;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_fetchIntentsSpecifiersWithCompletion:(id /* block */)a0;
- (void)setAccess:(id)a0 forSpecifier:(id)a1;
- (id)accesssForSpecifier:(id)a0;
- (void)viewDidTapLearnMore:(id)a0;
- (void)tccPreferencesChanged;

@end
