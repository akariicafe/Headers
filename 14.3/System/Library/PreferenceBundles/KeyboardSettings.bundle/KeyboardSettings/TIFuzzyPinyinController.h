@class NSArray, NSMutableSet, PSSpecifier;

@interface TIFuzzyPinyinController : PSListController

@property (retain, nonatomic) PSSpecifier *fuzzyPinyinSpecifier;
@property (retain, nonatomic) NSMutableSet *fuzzyPinyinPairs;
@property (copy, nonatomic) NSArray *fuzzyPinyinPairSpecifiers;

- (void)dealloc;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setKeyboardPreferenceValue:(id)a0 forSpecifier:(id)a1;
- (id)readFuzzyPinyinPairs;
- (id)keyboardPreferenceValue:(id)a0;

@end
