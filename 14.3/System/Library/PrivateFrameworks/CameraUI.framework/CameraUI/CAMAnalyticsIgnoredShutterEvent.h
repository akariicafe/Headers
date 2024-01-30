@interface CAMAnalyticsIgnoredShutterEvent : CAMAnalyticsEvent

- (id)eventName;
- (id)initWithReasons:(unsigned long long)a0 timeSinceLastPress:(double)a1 dynamicShutterEnabled:(BOOL)a2 responsiveShutterEnabled:(BOOL)a3;
- (id)_timeSinceLastPressRangeStringForMilliseconds:(long long)a0;

@end
