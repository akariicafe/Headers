@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge

@property long long failureCount;
@property BOOL hasPassword;
@property (retain) NSString *password;
@property id<NSURLAuthenticationChallengeSender> sender;
@property (retain) NSString *user;
@property BOOL userNameIsEditable;

- (id)init;
- (void)dealloc;
- (BOOL)userNameIsEmail;

@end
