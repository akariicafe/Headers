@class NSString, ACAccount;

@interface AMSUIWebFamilyAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
