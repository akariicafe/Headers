@class NSString, WBSSavedAccount, NSDate, NSURLProtectionSpace, WBSAutoFillPasskey;

@interface WBSSavedAccountMatch : NSObject

@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, nonatomic) long long matchLevel;
@property (readonly, copy, nonatomic) WBSAutoFillPasskey *autoFillPasskey;

- (id)completion;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithSavedAccount:(id)a0 protectionSpace:(id)a1 matchLevel:(long long)a2;
- (id)initWithSavedAccount:(id)a0 protectionSpace:(id)a1 matchLevel:(long long)a2 autoFillPasskey:(id)a3;

@end
