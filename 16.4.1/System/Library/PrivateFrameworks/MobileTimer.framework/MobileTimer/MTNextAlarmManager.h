@class NSSet, MTAlarmManager;
@protocol NAScheduler;

@interface MTNextAlarmManager : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) NSSet *nextAlarms;
@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (copy, nonatomic) id /* block */ updateHandler;

- (id)init;
- (void).cxx_destruct;
- (void)_handleAlarmsDidChange;
- (void)calculateNextAlarms;

@end
