@class MTAlarmManager;

@interface SBScheduledAlarmObserver : NSObject {
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (void)_nextAlarmChanged:(id)a0;
- (id)init;
- (void)_updateAlarmStatusBarItem;
- (void).cxx_destruct;

@end
