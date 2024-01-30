@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VTCoreSpeechKeepAliveHandler : NSObject <VTSiriEnabledMonitorDelegate> {
    int _activeNotificationToken;
    int _inactiveNotificationToken;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _voiceTriggerEnabled;
    BOOL _speakerStateActivated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_coreSpeechDaemonKeepAlived;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_enableCoreSpeechDaemonKeepAlive;
- (void)voiceTriggerPolicyDidChange:(BOOL)a0;
- (void)_handleSpeakerActivated;
- (void)_voiceTriggerPolicyDisabled;
- (void)start;
- (void)_voiceTriggerPolicyEnabled;
- (void)_disableCoreSpeechDaemonKeepAlive;
- (void)_handleSpeakerInactivated;
- (void)VTSiriEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;

@end
