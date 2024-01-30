@class NSString, ACAccount, AMSUIWebClientContext;

@interface AMSUIWebVerifyCredentialsAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *authenticationType;
@property (retain, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL ephemeral;
@property (nonatomic) long long serviceType;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL usernameEditable;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_authenticationTypeFromStringedType:(id)a0;
+ (long long)_serviceTypeFromType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
