@class AVOutputContext, AFNotifyObserver, MDModeDecision;

@interface MDAudioAccessoryHeuristic : NSObject <MDModeHeuristic> {
    BOOL _connectedToAudioAccessory;
    AFNotifyObserver *_connectedOutputDevicesObserver;
    AVOutputContext *_sharedSystemAudioContext;
    MDModeDecision *_modeDecisionBasedOnAudioAccessory;
}

- (void).cxx_destruct;
- (id)init;
- (id)determineCurrentMode;
- (void)_fetchConnectedAudioAccessoryState;
- (void)_connectedOutputDevicesDidChange:(id)a0;
- (BOOL)isConnectedToAudioAccessory;

@end
