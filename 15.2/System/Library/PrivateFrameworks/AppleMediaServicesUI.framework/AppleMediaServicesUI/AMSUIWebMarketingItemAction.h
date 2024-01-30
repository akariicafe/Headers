@class NSString, ACAccount, NSDictionary;

@interface AMSUIWebMarketingItemAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSDictionary *contextInfo;
@property (readonly, nonatomic) NSString *clientVersion;
@property (readonly, nonatomic) NSString *offerHints;
@property (readonly, nonatomic) NSString *placement;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)runAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
