@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge

+ (id)_messageForProtectionSpace:(id)a0;
+ (id)_titleForProtectionSpace:(id)a0;

- (id)user;
- (void)cancelAuthentication;
- (id)sender;
- (BOOL)hasPassword;
- (long long)failureCount;
- (id)password;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
