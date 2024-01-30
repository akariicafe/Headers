@class NSString, NSDate;

@interface ENCredentials : NSObject <NSCoding>

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *edamUserId;
@property (copy, nonatomic) NSString *noteStoreUrl;
@property (copy, nonatomic) NSString *webApiUrlPrefix;
@property (copy, nonatomic) NSString *authenticationToken;
@property (retain, nonatomic) NSDate *expirationDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)saveToKeychain;
- (void).cxx_destruct;
- (BOOL)areValid;
- (void)deleteFromKeychain;
- (id)initWithHost:(id)a0 authenticationResult:(id)a1;
- (id)initWithHost:(id)a0 edamUserId:(id)a1 noteStoreUrl:(id)a2 webApiUrlPrefix:(id)a3 authenticationToken:(id)a4 expirationDate:(id)a5;
- (id)keychainQuery;

@end
