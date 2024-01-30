@class MTAlarmManager;

@interface SBScheduledAlarmObserver : NSObject {
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (void)_updateAlarmStatusBarItem;
- (id)init;
- (void).cxx_destruct;
- (void)_nextAlarmChanged:(id)a0;

@end
