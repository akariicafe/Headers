@interface MTFlexibleEventHandler : MTEventHandler

- (id)knownFields;
- (id)eventTime:(id)a0;
- (id)metricsDataWithEventType:(id)a0 eventData:(id)a1;
- (BOOL)mtIncludeBaseFields;

@end
