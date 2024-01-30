@class NSMutableArray;

@interface PeriodicMaintenanceActivity : NSObject {
    NSMutableArray *_activities;
    unsigned long long _nextActivityIndex;
}

+ (id)sharedInstance;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;
+ (void)registerPeriodicActivityWithIdentifier:(id)a0 queue:(id)a1 activity:(id /* block */)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleActivityRun:(id)a0;
- (void)_registerPeriodicActivityWithIdentifier:(id)a0 queue:(id)a1 activity:(id /* block */)a2;
- (void)_registerPeriodicMaintenanceActivity;

@end
