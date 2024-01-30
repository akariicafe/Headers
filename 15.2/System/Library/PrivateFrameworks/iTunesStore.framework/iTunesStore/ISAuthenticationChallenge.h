@class NSString, NSURLAuthenticationChallenge;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject {
    NSURLAuthenticationChallenge *_challenge;
}

@property (retain) NSString *localizedMessage;
@property (retain) NSString *localizedTitle;
@property (readonly) BOOL hasPassword;
@property (readonly, retain) NSString *password;
@property (readonly, retain) NSString *user;
@property (readonly) long long failureCount;
@property (readonly) BOOL userNameIsEditable;
@property (readonly) BOOL userNameIsEmail;
@property (readonly) id<NSURLAuthenticationChallengeSender> sender;

- (void)dealloc;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
