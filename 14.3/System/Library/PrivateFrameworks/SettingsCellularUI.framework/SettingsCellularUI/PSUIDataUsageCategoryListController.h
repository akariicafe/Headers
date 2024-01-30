@class PSUIDataUsageCategorySpecifier, PSSpecifier;

@interface PSUIDataUsageCategoryListController : PSListController

@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;
@property (retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier;

- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (BOOL)shouldReloadSpecifiersOnResume;

@end
