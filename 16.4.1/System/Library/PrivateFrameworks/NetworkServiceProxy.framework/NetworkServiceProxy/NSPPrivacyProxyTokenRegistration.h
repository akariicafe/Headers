@class NSString, NSPPrivacyProxyTokenAgent, NWNetworkAgentRegistration;
@protocol NSPPrivacyProxyTokenRegistrationDelegate;

@interface NSPPrivacyProxyTokenRegistration : NSObject <NSPPrivacyProxyTokenAgentDelegate> {
    id<NSPPrivacyProxyTokenRegistrationDelegate> _delegate;
    NSPPrivacyProxyTokenAgent *_tokenAgent;
    NWNetworkAgentRegistration *_tokenAgentRegistration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reportErrorForAgent:(id)a0 error:(int)a1 withOptions:(id)a2;
- (void)tokenLowWaterMarkReachedForAgent:(id)a0;

@end
