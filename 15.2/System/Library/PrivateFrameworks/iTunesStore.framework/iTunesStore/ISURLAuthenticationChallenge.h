@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge

+ (id)_messageForProtectionSpace:(id)a0;
+ (id)_titleForProtectionSpace:(id)a0;

- (id)sender;
- (id)user;
- (id)password;
- (long long)failureCount;
- (BOOL)hasPassword;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
