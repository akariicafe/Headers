@class BCSBusinessItem, NSString, UIViewController;

@interface DDPersonAction : DDRemoteAction {
    BOOL _contactExists;
    BOOL _fromCNContact;
    BCSBusinessItem *_bizItem;
    BOOL _bizItemIsMessageable;
    NSString *_lastBizNumberFetched;
    UIViewController *_menuHeaderViewController;
}

+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)viewControllerProviderClass;

- (id)menuActions;
- (void).cxx_destruct;
- (BOOL)prefersActionMenuStyle;
- (id)_appendActionsForPhoneNumbers:(id)a0 emailAddresses:(id)a1 class:(Class)a2 filter:(id)a3 scheme:(id)a4;
- (id)_menuActionsForBusinessWithNumber:(id)a0;
- (id)_menuActionsForPersonWithNumber:(id)a0 email:(id)a1;
- (id)initWithURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (BOOL)menuHasHeaderView;
- (id)menuHeaderView;
- (id)menuHeaderViewController;
- (BOOL)phoneNumberIsBusiness:(id)a0;
- (struct CGSize { double x0; double x1; })suggestedContentSize;

@end
