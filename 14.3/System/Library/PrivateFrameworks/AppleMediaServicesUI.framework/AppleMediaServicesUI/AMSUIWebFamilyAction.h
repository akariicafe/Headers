@class NSString, ACAccount, AMSUIWebClientContext;

@interface AMSUIWebFamilyAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
