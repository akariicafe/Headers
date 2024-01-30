@class UNUserNotificationCenter, NSString, ATXFreeMomentTriggersListener, ATXMotionStateListener, NSObject, NSUserDefaults;
@protocol ATXFreeMomentDetectorDelegate, OS_dispatch_queue;

@interface ATXFreeMomentDetector : NSObject <ATXFreeMomentTriggersListenerDelegate, UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_freeMomentEndedQueue;
    NSUserDefaults *_userDefaults;
    ATXFreeMomentTriggersListener *freeMomentTriggersListner;
    ATXMotionStateListener *motionStateChangeListener;
}

@property (weak, nonatomic) id<ATXFreeMomentDetectorDelegate> freeMomentDetectorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)phoneUnlocksWithinLastNSeconds:(id)a0;
- (int)detectFreeMoment:(id)a0;
- (int)detectFreeMomentUsingAppLaunchHeuristics:(id)a0;
- (int)detectFreeMomentUsingPhoneUnlockHeuristics:(id)a0;
- (void)displayFreeMomentNotificationForReason:(int)a0 withFeatureVector:(id)a1;
- (id)lastFreeMomentTimeStamp;
- (BOOL)lastWorkMeetingOfDayEnded:(id)a0;
- (BOOL)meetingIsOnGoing:(id)a0;
- (BOOL)motionStateChangedFromMovingToStationary:(id)a0;
- (BOOL)motionStateChangedFromStationaryToWalking:(id)a0;
- (void)showFreeMomentNotificationIfApplicable;
- (BOOL)timeBetweenTwoMeetings:(id)a0;
- (BOOL)twoHoursSinceLastFreeMoment:(id)a0;
- (void)updateLastFreeMomentTimeStamp;

@end
