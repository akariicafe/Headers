@class NSTimer, NSDate, TVPStateMachine, NSObject;
@protocol OS_dispatch_queue;

@interface VUIRentalExpirationMonitor : NSObject

@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSDate *dateOfLastRentalExpirationHandling;
@property (retain, nonatomic) NSTimer *earliestExpirationTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (void)_libraryContentsDidChange:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)startMonitoring;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_registerStateMachineHandlers;
- (void)_isPlaybackUIBeingShownDidChange:(id)a0;
- (void)_expirationTimerDidFire:(id)a0;

@end
