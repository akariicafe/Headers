@class NSNumber;

@interface _SBIdleTimerGlobalNumericSettingMonitor : _SBIdleTimerGlobalSettingMonitor {
    NSNumber *_settingCache;
    id /* block */ _fetchSettingFromSource;
}

@property (readonly, nonatomic) NSNumber *numericValue;

- (void)_settingChanged:(id)a0;
- (void)dealloc;
- (BOOL)_updateCache;
- (id)formattedValue;
- (id)initWithLabel:(id)a0 delegate:(id)a1 updatingForNotification:(id)a2 fetchingWith:(id /* block */)a3;
- (void).cxx_destruct;

@end
