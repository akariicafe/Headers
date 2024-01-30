@class PSUIDataUsageCategorySpecifier, PSSpecifier;

@interface PSUIDataUsageCategoryListController : PSListController

@property (retain, nonatomic) PSSpecifier *spinnerSpecifier;
@property (retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;

@end
