@class PLNSNotificationOperatorComposition;

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic

@property (retain) PLNSNotificationOperatorComposition *basebandTimeNotification;
@property BOOL followupCurrentTimeRunning;

- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerForTimeChangedNotification;
- (id)currentTime;
- (void)timeChangedNotificationReceived:(id)a0;

@end
