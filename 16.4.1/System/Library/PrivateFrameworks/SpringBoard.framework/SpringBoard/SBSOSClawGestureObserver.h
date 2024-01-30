@class SBSOSDefaults, NSString, SOSManager, NSMutableSet, SBMainWorkspace, NSMutableDictionary, BSAbsoluteMachTimer;
@protocol SBSOSClawGestureObserverDelegate;

@interface SBSOSClawGestureObserver : NSObject <SOSManagerClientObserver, SBVolumePressBandit> {
    SOSManager *_sosManager;
    SBMainWorkspace *_workspace;
    NSMutableDictionary *_activePressTypeToDownTimestamp;
}

@property (retain, nonatomic) NSMutableSet *activePressTypes;
@property (readonly, nonatomic, getter=_isSOSActivated) BOOL sosActivated;
@property (retain, nonatomic, setter=_setSOSDefaults:) SBSOSDefaults *sosDefaults;
@property (retain, nonatomic) BSAbsoluteMachTimer *sosTriggerTimer;
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

- (void)_cancelSOSActivity;
- (void)handleVolumeDecrease;
- (void)_presentSOSInterface;
- (void)handleVolumeIncrease;
- (void)noteButtonPress:(long long)a0 isDown:(BOOL)a1;
- (id)_currentSOSButtonPressState;
- (void)dealloc;
- (id)_initWithSOSManager:(id)a0 workspace:(id)a1;
- (void)noteGestureReset;
- (id)init;
- (void)didUpdateCurrentSOSInitiationState:(long long)a0;
- (void)_updateActivePressesForPressType:(long long)a0 down:(BOOL)a1 timestamp:(double)a2;
- (void).cxx_destruct;

@end
