@class NSMutableArray;

@interface PeriodicMaintenanceActivity : NSObject {
    NSMutableArray *_activities;
    unsigned long long _nextActivityIndex;
}

+ (id)sharedInstance;
+ (long long)periodicActivityInterval;
+ (const char *)periodicActivityID;
+ (void)registerPeriodicActivityWithIdentifier:(id)a0 queue:(id)a1 activity:(id /* block */)a2;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_registerPeriodicActivityWithIdentifier:(id)a0 queue:(id)a1 activity:(id /* block */)a2;
- (void)_registerPeriodicMaintenanceActivity;
- (void)_handleActivityRun:(id)a0;

@end
