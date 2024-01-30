@class NSString;

@interface WFProxyKeychainOperation : WFOperation

@property long long type;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *port;

+ (id)getPasswordOperationForHost:(id)a0 port:(id)a1 username:(id)a2;
+ (id)removePasswordOperationForHost:(id)a0 port:(id)a1 username:(id)a2;
+ (id)savePassswordOperationForHost:(id)a0 port:(id)a1 username:(id)a2 password:(id)a3;

- (void)start;
- (void).cxx_destruct;
- (id)_credentialsForProtectionSpace:(id)a0;
- (id)initWithHost:(id)a0 port:(id)a1 username:(id)a2 password:(id)a3 type:(long long)a4;

@end
