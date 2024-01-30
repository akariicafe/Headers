@class MNTrafficIncidentAlert, NSTimer, MNLocation;
@protocol MNTrafficIncidentAlertUpdaterDelegate;

@interface MNTrafficIncidentAlertUpdater : NSObject {
    MNLocation *_lastLocation;
    MNTrafficIncidentAlert *_pendingAlert;
    MNTrafficIncidentAlert *_activeAlert;
    BOOL _isSpeakingAlert;
    int _trafficIncidentStatus;
    NSTimer *_alertRetryTimer;
}

@property (weak, nonatomic) id<MNTrafficIncidentAlertUpdaterDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)clearAlerts;
- (void)updateForLocation:(id)a0;
- (void)updateForReroute:(id)a0;
- (void)updateForAlertFromResponse:(id)a0;
- (void)updateRerouteProposalStatusForRequest:(id)a0;
- (void)_activateAlertForLocation:(id)a0;
- (void)_alertRetryTimerFired:(id)a0;
- (void)_removeActiveAlert;
- (void)_updateAlertDistanceAndETA:(id)a0;

@end
