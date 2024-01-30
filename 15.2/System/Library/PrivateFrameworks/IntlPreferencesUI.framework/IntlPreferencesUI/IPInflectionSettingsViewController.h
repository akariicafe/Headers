@class _NSAttributedStringGrammarInflection;
@protocol IPInflectionSettingsViewControllerDelegate;

@interface IPInflectionSettingsViewController : PSListController

@property (retain, nonatomic) _NSAttributedStringGrammarInflection *inflection;
@property (weak, nonatomic) id<IPInflectionSettingsViewControllerDelegate> delegate;

+ (id)pronounDisplayStringForInflection:(id)a0;

- (id)specifiers;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)customFieldForSpecifier:(id)a0;
- (void)setCustomField:(id)a0 forSpecifier:(id)a1;
- (id)thirdPartyCanAccessUserInflection;
- (void)setThirdPartyCanAccessUserInflection:(id)a0 specifier:(id)a1;

@end
