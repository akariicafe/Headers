@class PLSmartPLService, PLEntryNotificationOperatorComposition;

@interface SmartPLMemoryTracking : NSObject

@property (weak) PLSmartPLService *operator;
@property (retain) PLEntryNotificationOperatorComposition *memoryTrackingNotification;

+ (id)defaults;

- (void).cxx_destruct;
- (void)handleMemoryTracking:(id)a0;
- (void)startWithOperator:(id)a0;

@end
