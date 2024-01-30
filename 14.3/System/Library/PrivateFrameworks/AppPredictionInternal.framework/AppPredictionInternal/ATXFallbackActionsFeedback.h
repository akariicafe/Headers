@interface ATXFallbackActionsFeedback : NSObject <ATXFeedbackSessionListenerDelegateProtocol>

+ (id)sharedInstance;

- (void)receiveClientModelResult:(id)a0;
- (id)_init;
- (id)clientModelIds;
- (void)receiveClientModelResult:(id)a0 histogramManager:(id)a1;

@end
