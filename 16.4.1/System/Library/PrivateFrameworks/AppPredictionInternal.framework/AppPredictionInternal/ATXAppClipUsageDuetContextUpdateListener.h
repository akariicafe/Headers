@interface ATXAppClipUsageDuetContextUpdateListener : NSObject <ATXAppClipLaunchListenerProtocol>

@property (readonly, nonatomic) id /* block */ appClipUsageHandler;

- (void).cxx_destruct;
- (void)startListeningWithClientId:(id)a0;
- (void)startListeningWithCallback:(id /* block */)a0 clientId:(id)a1;

@end
