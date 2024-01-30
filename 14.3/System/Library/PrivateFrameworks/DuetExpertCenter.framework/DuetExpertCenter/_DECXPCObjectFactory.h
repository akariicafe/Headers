@interface _DECXPCObjectFactory : NSObject {
    unsigned long long _priorityLevel;
    unsigned long long _allowBattery;
}

@property (nonatomic) long long intervalHours;
@property (nonatomic) long long intervalMinutes;
@property (nonatomic) long long intervalSeconds;
@property (nonatomic) BOOL repeating;
@property (nonatomic) BOOL requireScreenSleep;
@property (nonatomic) BOOL requireClassC;
@property (nonatomic) BOOL requireClassA;

- (long long)_getInterval;
- (void)allowBattery;
- (id)init;
- (void)disallowBattery;
- (id)getXPCObject;
- (void)setPriorityLevelMaintenance;
- (const char *)_activityPriority;
- (void)setPriorityLevelUtility;
- (BOOL)_shouldAllowBattery;

@end
