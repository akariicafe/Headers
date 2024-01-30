@class NSString, NSTimer, MNTrafficIncidentAlert, MNLocation;
@protocol MNTrafficIncidentAlertUpdaterDelegate;

@interface MNTrafficIncidentAlertUpdater : NSObject {
    MNLocation *_lastLocation;
    MNTrafficIncidentAlert *_pendingAlert;
    MNTrafficIncidentAlert *_activeAlert;
    BOOL _isSpeakingAlert;
    int _trafficIncidentStatus;
    NSTimer *_alertRetryTimer;
    NSString *_previousBannerID;
}

@property (weak, nonatomic) id<MNTrafficIncidentAlertUpdaterDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clearAlerts;
- (void)_activateAlertForLocation:(id)a0;
- (void)_removeActiveAlert;
- (void)_updateAlertDistanceAndETA:(id)a0;
- (void)_updatePreviousDisplayedBannerForRequest:(id)a0;
- (void)_updateRerouteProposalStatusForRequest:(id)a0;
- (void)updateForAlertFromResponse:(id)a0;
- (void)updateForLocation:(id)a0;
- (void)updateForReroute:(id)a0;
- (void)updatePreviousIncidentResultForRequest:(id)a0;

@end
