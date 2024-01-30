@class NWNetworkAgentRegistration, NSString, NSData, NSObject, NSPPrivacyProxyConfigAgent;
@protocol NSPPrivacyProxyNetworkRegistrationDelegate, OS_nw_proxy_config;

@interface NSPPrivacyProxyNetworkRegistration : NSObject <NSPPrivacyProxyConfigAgentDelegate>

@property (weak) id<NSPPrivacyProxyNetworkRegistrationDelegate> delegate;
@property (retain, nonatomic) NSPPrivacyProxyConfigAgent *proxyConfigAgent;
@property (retain, nonatomic) NWNetworkAgentRegistration *proxyConfigAgentRegistration;
@property (retain, nonatomic) NSObject<OS_nw_proxy_config> *proxyConfiguration;
@property (retain, nonatomic) NSData *configurationHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRegistered;
- (void)resetError;
- (void).cxx_destruct;
- (void)reportErrorForAgent:(id)a0 error:(int)a1 withOptions:(id)a2;
- (void)resetProxyConfigAgentFileHandle;
- (id)initWithAgentUUID:(id)a0 agentDescription:(id)a1 delegate:(id)a2;
- (id)networkRegistrationDescription;
- (void)resetProxyAgent;
- (void)teardownProxyAgent;
- (id)proxyConfigurationHash;

@end
