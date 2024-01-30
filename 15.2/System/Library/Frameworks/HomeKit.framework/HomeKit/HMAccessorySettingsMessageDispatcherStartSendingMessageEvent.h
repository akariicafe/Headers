@class NSString;

@interface HMAccessorySettingsMessageDispatcherStartSendingMessageEvent : HMCoreAnalyticsMetricEvent

@property (readonly, copy) NSString *messageName;

- (id)eventPayload;
- (void).cxx_destruct;
- (id)initWithMessageName:(id)a0;

@end
