@class NSString;

@interface HMAccessorySettingsMessageDispatcherStartSendingMessageEvent : HMCoreAnalyticsMetricEvent

@property (readonly, copy) NSString *messageName;
@property (readonly, copy) NSString *updateKeyPath;

- (id)eventPayload;
- (void).cxx_destruct;
- (id)initWithMessageName:(id)a0 updateKeyPath:(id)a1;

@end
