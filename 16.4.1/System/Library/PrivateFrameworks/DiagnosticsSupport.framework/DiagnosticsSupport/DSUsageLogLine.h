@class NSString;

@interface DSUsageLogLine : DSLogLine

@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) int usageTime;
@property (readonly, nonatomic) int standbyTime;
@property (readonly, nonatomic) int batteryLevel;
@property (readonly, nonatomic) BOOL isReset;
@property (readonly, nonatomic) BOOL isOnPower;
@property (readonly, nonatomic) BOOL isOffPower;

@end
