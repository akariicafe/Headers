@class NSTimeZone, NSString, NSDate, NSDateComponents;

@interface HDAlarmEvent : NSObject

@property (copy, nonatomic) NSTimeZone *_unitTest_localTimeZoneOverride;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *eventIdentifier;
@property (readonly, copy, nonatomic) NSDate *dueDate;
@property (readonly, copy, nonatomic) NSDateComponents *dueDateComponents;
@property (readonly, copy, nonatomic) NSDate *currentDueDate;
@property (readonly, nonatomic) unsigned long long eventOptions;
@property (readonly, nonatomic) BOOL requiresDeviceUnlocked;
@property (readonly, nonatomic) BOOL requiresDeviceOnWrist;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)a0 eventIdentifier:(id)a1 dueDate:(id)a2 dueDateComponents:(id)a3 eventOptions:(unsigned long long)a4;
- (id)initWithClientIdentifier:(id)a0 eventIdentifier:(id)a1 dueDate:(id)a2 eventOptions:(unsigned long long)a3;
- (id)initWithClientIdentifier:(id)a0 eventIdentifier:(id)a1 dueDateComponents:(id)a2 eventOptions:(unsigned long long)a3;

@end
