@class NSMutableSet, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface SESAlarm : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSMapTable *registered;
    NSMutableSet *pendingAlarms;
}

+ (void)kickoff;
+ (void)clearAlarm:(id)a0;
+ (BOOL)isAlarmSet:(id)a0;
+ (void)setAlarm:(id)a0 secondsFromNow:(double)a1;
+ (BOOL)registerAlarm:(id)a0 handler:(id)a1;
+ (void)deregisterAlarm:(id)a0;
+ (id)sharedObject;

- (void).cxx_destruct;
- (void)_handleAlarmFired:(id)a0;
- (id)init;

@end
