@class NSArray, NSMutableSet, PSSpecifier;

@interface TIFuzzyPinyinController : PSListController

@property (retain, nonatomic) PSSpecifier *fuzzyPinyinSpecifier;
@property (retain, nonatomic) NSMutableSet *fuzzyPinyinPairs;
@property (copy, nonatomic) NSArray *fuzzyPinyinPairSpecifiers;

- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setKeyboardPreferenceValue:(id)a0 forSpecifier:(id)a1;
- (id)readFuzzyPinyinPairs;
- (id)keyboardPreferenceValue:(id)a0;

@end
