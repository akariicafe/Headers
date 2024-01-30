@class CSAudioStreamHolding, CSAsset, NSMutableDictionary, CSAudioProvider, NSString, NSObject;
@protocol OS_dispatch_queue, CSVoiceTriggerDelegate;

@interface CSVoiceTriggerFirstPassHearst : NSObject <CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate, CSPhoneCallStateMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *hearstSecondPassRequests;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (nonatomic) float remoteMicVADThreshold;
@property (nonatomic) float remoteMicVADMyriadThreshold;
@property (nonatomic) float minimumPhraseLengthForVADGating;
@property (retain, nonatomic) CSAudioStreamHolding *triggeredAudioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *triggeredAudioProvider;
@property (nonatomic) unsigned long long secondChanceHotTillMachTime;
@property (nonatomic) unsigned long long phoneCallState;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setAsset:(id)a0;
- (void)_reset;
- (void)activationEventNotificationHandler:(id)a0 event:(id)a1 completion:(id /* block */)a2;
- (void)setAsset:(id)a0;
- (void)CSPhoneCallStateMonitor:(id)a0 didRecievePhoneCallStateChange:(unsigned long long)a1;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)reset;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)_handleSecondPassResult:(unsigned long long)a0 secondPassRequest:(id)a1 voiceTriggerInfo:(id)a2 deviceId:(id)a3 secondChanceCandidate:(BOOL)a4 error:(id)a5 completion:(id /* block */)a6;
- (void)_cancelAllAudioStreamHoldings;
- (void)_handleRemoteMicVoiceTriggerEvent:(id)a0 secondPassRequest:(id)a1 completion:(id /* block */)a2;
- (void)_handleRemoteMicVADEventWithSecondPassRequest:(id)a0;
- (void)_requestStartAudioStreamWitContext:(id)a0 secondPassRequest:(id)a1 startStreamOption:(id)a2 completion:(id /* block */)a3;

@end
