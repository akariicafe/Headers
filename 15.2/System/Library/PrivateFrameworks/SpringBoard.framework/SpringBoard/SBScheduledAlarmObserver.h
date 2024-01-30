@class MTAlarmManager;

@interface SBScheduledAlarmObserver : NSObject {
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (void)_updateAlarmStatusBarItem;
- (void).cxx_destruct;
- (id)init;
- (void)_nextAlarmChanged:(id)a0;

@end
