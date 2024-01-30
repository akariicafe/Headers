@class CNContact;

@interface DDPersonAction : DDRemoteAction {
    CNContact *_contact;
    BOOL _contactExists;
}

+ (id)supportedSchemes;
+ (BOOL)handlesUrl:(id)a0 result:(struct __DDResult { } *)a1;
+ (id)viewControllerProviderClass;

- (void).cxx_destruct;
- (BOOL)prefersActionMenuStyle;
- (id)initWithURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (id)menuActions;
- (struct CGSize { double x0; double x1; })suggestedContentSize;
- (id)_appendActionsForPhoneNumbers:(id)a0 emailAddresses:(id)a1 class:(Class)a2 filter:(id)a3 scheme:(id)a4;
- (id)_menuActionsForBusinessWithNumber:(id)a0;
- (id)_menuActionsForPersonWithNumber:(id)a0 email:(id)a1;

@end
