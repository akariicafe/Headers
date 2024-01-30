@interface _SBIdleTimerGlobalBoolSettingMonitor : _SBIdleTimerGlobalNumericSettingMonitor

@property (readonly, nonatomic) BOOL boolValue;

- (id)formattedValue;
- (id)initWithLabel:(id)a0 delegate:(id)a1 updatingForNotification:(id)a2 fetchingWith:(id /* block */)a3;

@end
