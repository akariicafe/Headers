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

- (void)_voiceTriggerPolicyEnabled;
- (void)voiceTriggerPolicyDidChange:(BOOL)a0;
- (void)_enableCoreSpeechDaemonKeepAlive;
- (void)_disableCoreSpeechDaemonKeepAlive;
- (void)_handleSpeakerInactivated;
- (void)dealloc;
- (void)VTSiriEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (BOOL)_coreSpeechDaemonKeepAlived;
- (void)_handleSpeakerActivated;
- (id)init;
- (void)start;
- (void)_voiceTriggerPolicyDisabled;
- (void).cxx_destruct;

@end
