@class NSDate;

@interface BYAnalyticsEventAppleIDSignIn : NSObject

@property (nonatomic) unsigned long long context;
@property (nonatomic) NSDate *authenticationStartDate;
@property (nonatomic) NSDate *signInStartDate;
@property (nonatomic) NSDate *completionDate;

- (id)_eventPayload;
- (id)initWithAnalyticsManager:(id)a0 context:(unsigned long long)a1;
- (void)markSignInCompleted;
- (void)markSignInStartedAfterAuthenticationCompleted;

@end
