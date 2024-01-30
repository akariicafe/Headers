@class NSString;
@protocol CTCarrierSpaceClientDelegate;

@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface>

@property (weak, nonatomic) id<CTCarrierSpaceClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)usageDidChange;
- (void)plansDidChange;
- (void)appsDidChange;
- (void)purchasedPlan:(id)a0 didChangeStatus:(long long)a1 context:(id)a2;
- (void).cxx_destruct;
- (void)capabilitiesDidChange:(id)a0;
- (void)dataPlanMetricsDidChange;
- (void)userConsentFlowInfoDidChange;
- (void)remoteObjectRespondsToSelector:(SEL)a0 handler:(id /* block */)a1;

@end
