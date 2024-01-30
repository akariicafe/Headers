@interface CMSContentFailureEvent : CMSBaseContentFailureEvent

@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL didReachMaxRetries;
@property (nonatomic) BOOL doesServiceSupportPlaybackFailureRecovery;

- (id)encoded;
- (id)initWithServiceID:(id)a0 sessionIdentifier:(id)a1 errorCode:(long long)a2;
- (id)initWithServiceID:(id)a0 sessionIdentifier:(id)a1 errorCode:(long long)a2 doesServiceSupportPlaybackFailureRecovery:(BOOL)a3;

@end
