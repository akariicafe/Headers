@class HMDRemoteLoginProxyAuthenticationRequest;

@interface HMDRemoteLoginReceiverProxyAuthentication : HMDRemoteLoginReceiverAuthentication

@property (readonly, nonatomic) HMDRemoteLoginProxyAuthenticationRequest *request;

+ (id)logCategory;

- (void)_authenticate;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)authenticate;
- (id)initWithSessionID:(id)a0 remoteDevice:(id)a1 workQueue:(id)a2 remoteMessageSender:(id)a3 delegate:(id)a4 request:(id)a5;

@end
