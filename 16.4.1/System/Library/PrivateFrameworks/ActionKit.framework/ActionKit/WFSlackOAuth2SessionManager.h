@class NSString;

@interface WFSlackOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClientID:(id)a0 clientSecret:(id)a1;
- (id)initWithSessionConfiguration:(id)a0 clientID:(id)a1 clientSecret:(id)a2;

@end
