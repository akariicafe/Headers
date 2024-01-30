@class PLNSNotificationOperatorComposition;

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic

@property (retain) PLNSNotificationOperatorComposition *basebandTimeNotification;
@property BOOL followupCurrentTimeRunning;

- (void)timeChangedNotificationReceived:(id)a0;
- (void).cxx_destruct;
- (id)currentTime;
- (void)dealloc;
- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;
- (void)registerForTimeChangedNotification;

@end
