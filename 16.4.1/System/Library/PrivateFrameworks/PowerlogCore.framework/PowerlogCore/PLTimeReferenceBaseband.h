@class PLNSNotificationOperatorComposition;

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic

@property (retain) PLNSNotificationOperatorComposition *basebandTimeNotification;
@property BOOL followupCurrentTimeRunning;

- (void)registerForTimeChangedNotification;
- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;
- (id)currentTime;
- (void)dealloc;
- (void).cxx_destruct;
- (void)timeChangedNotificationReceived:(id)a0;

@end
