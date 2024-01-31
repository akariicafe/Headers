@class VKWalkAssistStatus, AVAudioPlayer, VKWalkAssistFeedbackProcessor, VKWalkAssistHapticEngine, VKWalkAssistHeadingManager, NSString;

@interface VKWalkAssistManager : NSObject <MNNavigationServiceObserver, VKWalkAssistStatusDelegate>

@property (nonatomic) double bearing;
@property (retain, nonatomic) VKWalkAssistHeadingManager *headingManager;
@property (retain, nonatomic) VKWalkAssistStatus *assistStatus;
@property (retain, nonatomic) VKWalkAssistFeedbackProcessor *feedbackProcessor;
@property (retain, nonatomic) VKWalkAssistHapticEngine *hapticEngine;
@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) NSString *lastAssistStatusAnnouncement;
@property (retain, nonatomic) NSString *startRouteRoadName;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=hasArrived) BOOL arrived;
@property (readonly, nonatomic) BOOL isInWalkingNavigatingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)navigationService:(id)a0 didSwitchToNewTransportType:(int)a1 newRoute:(id)a2 traffic:(id)a3;
- (void)navigationService:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)navigationService:(id)a0 didUpdateHeading:(double)a1 accuracy:(double)a2;
- (void)navigationService:(id)a0 didUpdateMatchedLocation:(id)a1;
- (void)_queueAssistStatusAnnouncement:(id)a0;
- (void)_stopObservingNavigationUpdates;
- (double)_bearingFromCurrentLocation:(id)a0 toEndLocation:(id)a1;
- (void)_startObservingNavigationUpdates;
- (id)_startRouteLocation;
- (void)didArrive:(BOOL)a0;
- (void)didUpdateStatusWithAnnouncement:(id)a0;
- (void)navigationService:(id)a0 didReroute:(id)a1;

@end
