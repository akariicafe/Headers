@class PSUIDataUsageCategorySpecifier, PSSpecifier;

@interface PSUIDataUsageCategoryListController : PSListController

@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;
@property (retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier;

- (id)specifiers;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (id)init;

@end
