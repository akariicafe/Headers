@class NSString;

@interface WFProxyKeychainOperation : WFOperation

@property long long type;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *port;

+ (id)removePasswordOperationForHost:(id)a0 port:(id)a1 username:(id)a2;
+ (id)savePassswordOperationForHost:(id)a0 port:(id)a1 username:(id)a2 password:(id)a3;
+ (id)getPasswordOperationForHost:(id)a0 port:(id)a1 username:(id)a2;

- (void)start;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0 port:(id)a1 username:(id)a2 password:(id)a3 type:(long long)a4;
- (id)_credentialsForProtectionSpace:(id)a0;

@end
