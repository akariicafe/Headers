@class NSString, ACAccount, AMSUIWebClientContext;

@interface AMSUIWebFamilyAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_dictionaryFromLookupResult:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
