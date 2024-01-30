@class SBMainWorkspace, BSTimer, NSString, NSMutableSet, SBClawGestureLogger, SOSManager, SBSOSDefaults;
@protocol SBSOSClawGestureObserverDelegate;

@interface SBSOSClawGestureObserver : NSObject <SOSManagerClientObserver, SBVolumePressBandit> {
    SOSManager *_sosManager;
    SBMainWorkspace *_workspace;
}

@property (retain, nonatomic) NSMutableSet *activePressTypes;
@property (readonly, nonatomic, getter=_isSOSActivated) BOOL sosActivated;
@property (retain, nonatomic, setter=_setSOSDefaults:) SBSOSDefaults *sosDefaults;
@property (retain, nonatomic) BSTimer *sosTriggerTimer;
@property (retain, nonatomic) SBClawGestureLogger *clawGestureLogger;
@property (nonatomic, getter=_wasSOSTriggeredByClaw, setter=_setWasSOSTriggeredByClaw:) BOOL wasSOSTiggeredByClaw;
@property (readonly, nonatomic, getter=_isClawGestureActive) BOOL clawGestureActive;
@property (readonly, nonatomic, getter=_isAutomaticCallCountdownEnabled) BOOL autoCallCountdownEnabled;
@property (nonatomic, getter=isGestureLoggingEnabled) BOOL gestureLoggingEnabled;
@property (nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) BOOL sosEnabled;
@property (weak, nonatomic) id<SBSOSClawGestureObserverDelegate> delegate;
@property (readonly, nonatomic, getter=isClawActivated) BOOL clawActivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateCurrentSOSInitiationState:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_initWithSOSManager:(id)a0 workspace:(id)a1;
- (void)_presentSOSInterface;
- (void)_cancelSOSActivity;
- (void)noteButtonPress:(long long)a0 isDown:(BOOL)a1;
- (void)noteGestureReset;

@end
