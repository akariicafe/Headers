@interface MTFlexibleEventHandler : MTEventHandler

- (id)knownFields;
- (id)metricsDataWithEventType:(id)a0 eventData:(id)a1;
- (id)eventTime:(id)a0;
- (BOOL)mtIncludeBaseFields;

@end
