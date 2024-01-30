@class NSString;

@interface ASDTestFlightServiceExtension : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)a0;
- (void)serviceExtensionTimeWillExpire;
- (void)didReceivePushToken:(id)a0 reply:(id /* block */)a1;
- (void)didReceivePushMessages:(id)a0 reply:(id /* block */)a1;
- (void)reloadAppsFromServerWithReply:(id /* block */)a0;
- (void)didReachTerminalPhaseWithBetaBundleID:(id)a0 terminalPhase:(long long)a1 error:(id)a2 reply:(id /* block */)a3;

@end
