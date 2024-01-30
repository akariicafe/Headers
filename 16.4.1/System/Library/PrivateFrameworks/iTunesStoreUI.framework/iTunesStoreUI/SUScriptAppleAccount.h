@class SUScriptAppleAccountType, NSString, SUScriptAppleAccountCredential, ACAccount, ACAccountStore;

@interface SUScriptAppleAccount : SUScriptObject {
    ACAccount *_account;
    ACAccountStore *_accountStore;
}

@property (readonly) ACAccount *nativeAccount;
@property (readonly) ACAccountStore *nativeAccountStore;
@property (readonly) NSString *accountDescription;
@property (readonly) SUScriptAppleAccountType *accountType;
@property (readonly) SUScriptAppleAccountCredential *credential;
@property (readonly) NSString *dsID;
@property (readonly) NSString *identifier;
@property (readonly) NSString *username;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)reload;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithACAccount:(id)a0 accountStore:(id)a1;
- (void)setAgeVerificationExpirationDate:(id)a0 completionHandler:(id)a1;

@end
