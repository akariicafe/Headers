@class NSString, ADAMAudioDataReceiver, AXDispatchTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HUHeadphoneLevelController : NSObject <ADAMAudioDataReceiverDelegate, AXIDSServicesClient>

@property (retain, nonatomic) ADAMAudioDataReceiver *receiver;
@property (retain, nonatomic) AXDispatchTimer *adamSuspendedTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (nonatomic) float slowLeq;
@property (nonatomic) float fastLeq;
@property (nonatomic, getter=isMeasurementEnabled) BOOL measurementEnabled;
@property (nonatomic) unsigned long long thresholdLevel;
@property (nonatomic) BOOL isCompanionConnectedToIDS;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idsQueue;
@property (nonatomic) BOOL shouldStreamingDataToGizmo;
@property (nonatomic) unsigned long long streamingDataToGizmoType;
@property (nonatomic) unsigned long long streamingToGizmoAudioLevel;
@property (retain, nonatomic) NSMutableArray *automationSampleData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)connectedDevicesDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didReceiveIncomingData:(id)a0;
- (void)_startIDSConnection;
- (void)_stopIDSConnection;
- (void)_unregisterMediaNotification;
- (void)_startRecevingADAMAudioSample:(BOOL)a0;
- (void)pushValuesToLocalOrIDSListeners;
- (void)pushValuesToRemoteListeners;
- (id)_pushPayload;
- (void)_pushValues:(id)a0 identifier:(unsigned long long)a1;
- (void)_publishAudioDataIDSMessage:(id)a0;
- (void)restartADAMTimer;
- (id)_sendIDSRequestToCompanion:(id)a0 messageIdentifier:(unsigned long long)a1;
- (void)_publishRequestAudioDataIDSMessage:(id)a0;
- (unsigned long long)_audioLevelFromAudioDict:(id)a0;
- (void)pushValuesToRemoteChangeListeners;
- (void)_registerMediaNotification;
- (void)_mediaPlaybackDidChange:(id)a0;
- (void)_automationPlaySampleData;
- (void)receiveAudioSample:(id)a0;
- (void)serverConnectionWasInterrupted;
- (id)registerForHeadphoneLevelUpdates:(id)a0;
- (id)registerForRemoteHeadphoneLevelUpdates:(id)a0;
- (id)registerForRemoteHeadphoneLevelChangesUpdates:(id)a0;
- (void)_automationStartPlayingSampleData:(id)a0;

@end
