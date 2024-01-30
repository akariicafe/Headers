@interface AFDictationDiscoverabilitySignalsStreamManager : NSObject

+ (void)sendDictationRequestStartedEventWithBundleIdentifier:(id)a0 context:(id)a1 userInfo:(id)a2;
+ (void)sendSiriRequestStartedEventWithBundleIdentifier:(id)a0 context:(id)a1 userInfo:(id)a2;
+ (void)sendSendMessageSentEventWithBundleIdentifier:(id)a0 context:(id)a1 userInfo:(id)a2;

@end
