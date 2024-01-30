@class HMDRemoteLoginInitiatorAuthentication;

@interface HMDRemoteLoginInitiatorAuthenticationSession : HMDRemoteLoginInitiatorSession

@property (readonly, nonatomic) HMDRemoteLoginInitiatorAuthentication *remoteAuthentication;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)a0 remoteAuthentication:(id)a1 completion:(id /* block */)a2 home:(id)a3;

@end
