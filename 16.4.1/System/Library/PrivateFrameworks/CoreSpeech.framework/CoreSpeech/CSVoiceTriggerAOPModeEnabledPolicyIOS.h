@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy <CSSiriClientBehaviorMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_recordStateQueue;
}

@property (nonatomic) BOOL isSiriClientConsideredAsRecord;
@property (retain, nonatomic) NSString *pendingRecordingStopUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isHearstRoutedAndWithNoPhoneCall;
- (BOOL)_isSpeechDetectionDevicePresent;
- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)_addConditionsForIOSAOP;
- (void)siriClientBehaviorMonitor:(id)a0 didChangedRecordState:(BOOL)a1 withEventUUID:(id)a2 withContext:(id)a3;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)_subscribeEventMonitors;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (BOOL)_isInPhoneCallStateWithHSPhoneCallCapableRoute;
- (id)init;
- (void).cxx_destruct;
- (void)_addConditionsForIOSBargeIn;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;

@end
