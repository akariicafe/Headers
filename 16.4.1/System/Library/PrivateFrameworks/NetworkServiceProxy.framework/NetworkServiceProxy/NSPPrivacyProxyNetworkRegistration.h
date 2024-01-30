@class NWNetworkAgentRegistration, NSString, NSData, NSPPrivacyProxyConfigAgent;
@protocol NSPPrivacyProxyNetworkRegistrationDelegate;

@interface NSPPrivacyProxyNetworkRegistration : NSObject <NSPPrivacyProxyConfigAgentDelegate> {
    id<NSPPrivacyProxyNetworkRegistrationDelegate> _delegate;
    NSPPrivacyProxyConfigAgent *_proxyConfigAgent;
    NWNetworkAgentRegistration *_proxyConfigAgentRegistration;
    NSData *_configurationData;
    NSData *_configurationHash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reportErrorForAgent:(id)a0 error:(int)a1 withOptions:(id)a2;

@end
