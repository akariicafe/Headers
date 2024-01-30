@class NSString, ACAccount;

@interface SKUIJSAppleAccount : NSObject <SKUIJSAppleAccount> {
    ACAccount *_account;
}

@property (readonly) ACAccount *nativeAccount;
@property (readonly, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSString *DSID;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *username;

- (void).cxx_destruct;
- (id)initWithACAccount:(id)a0;

@end
