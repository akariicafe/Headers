@class NSString, NSPPrivacyProxyTokenAgent, NWNetworkAgentRegistration;
@protocol NSPPrivacyProxyTokenRegistrationDelegate;

@interface NSPPrivacyProxyTokenRegistration : NSObject <NSPPrivacyProxyTokenAgentDelegate>

@property (weak) id<NSPPrivacyProxyTokenRegistrationDelegate> delegate;
@property (retain, nonatomic) NSPPrivacyProxyTokenAgent *tokenAgent;
@property (retain, nonatomic) NWNetworkAgentRegistration *tokenAgentRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLowWaterMark:(unsigned int)a0;
- (unsigned long long)tokenCount;
- (void)flushTokens;
- (void).cxx_destruct;
- (void)addToken:(id)a0;
- (void)reportErrorForAgent:(id)a0 error:(int)a1 withOptions:(id)a2;
- (void)tokenLowWaterMarkReachedForAgent:(id)a0;
- (id)initWithAgentUUID:(id)a0 agentDescription:(id)a1 delegate:(id)a2;
- (void)teardownTokenAgent;
- (void)registerTokenAgent:(unsigned long long)a0;
- (void)resetTokenAgentFileHandle;

@end
