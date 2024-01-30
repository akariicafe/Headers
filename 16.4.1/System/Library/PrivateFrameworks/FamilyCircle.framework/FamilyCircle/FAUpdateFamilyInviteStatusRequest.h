@class NSString, NSURL;

@interface FAUpdateFamilyInviteStatusRequest : FAFamilyCircleRequest

@property (readonly, copy) NSString *inviteCode;
@property (readonly, copy) NSURL *requestUrl;
@property (readonly) long long inviteStatus;

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithInviteCode:(id)a0 inviteStatus:(long long)a1 requestUrl:(id)a2;

@end
