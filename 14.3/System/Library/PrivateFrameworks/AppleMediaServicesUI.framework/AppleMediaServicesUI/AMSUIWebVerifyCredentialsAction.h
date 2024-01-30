@class NSString, ACAccount, AMSUIWebClientContext;

@interface AMSUIWebVerifyCredentialsAction : NSObject <AMSUIWebActionRunnable>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL ephemeral;
@property (nonatomic) long long serviceType;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL usernameEditable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_serviceTypeFromType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
