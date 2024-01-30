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

- (void)_handleSpeakerActivated;
- (void)voiceTriggerPolicyDidChange:(BOOL)a0;
- (void)VTSiriEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)start;
- (void)_voiceTriggerPolicyDisabled;
- (void)_voiceTriggerPolicyEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)_handleSpeakerInactivated;
- (void)_enableCoreSpeechDaemonKeepAlive;
- (void)_disableCoreSpeechDaemonKeepAlive;
- (void)dealloc;
- (BOOL)_coreSpeechDaemonKeepAlived;

@end
