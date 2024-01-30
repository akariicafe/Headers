@class CSAudioStreamHolding, CSAsset, NSMutableDictionary, CSAudioProvider, NSString, NSObject;
@protocol OS_dispatch_queue, CSVoiceTriggerDelegate;

@interface CSVoiceTriggerFirstPassRemora : NSObject <CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *remoraSecondPassRequests;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSAudioStreamHolding *triggeredAudioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *triggeredAudioProvider;
@property (nonatomic) unsigned long long secondChanceHotTillMachTime;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (id)init;
- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1;
- (void)_setAsset:(id)a0;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)activationEventNotificationHandler:(id)a0 event:(id)a1 completion:(id /* block */)a2;
- (void)start;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)_handleRemoraTriggerEvent:(id)a0 secondPassRequest:(id)a1 completion:(id /* block */)a2;
- (void)_cancelAllAudioStreamHoldings;
- (void)_requestStartAudioStreamWitContext:(id)a0 secondPassRequest:(id)a1 startStreamOption:(id)a2 completion:(id /* block */)a3;
- (void)_handleSecondPassResult:(unsigned long long)a0 secondPassRequest:(id)a1 voiceTriggerInfo:(id)a2 deviceId:(id)a3 secondChanceCandidate:(BOOL)a4 error:(id)a5 completion:(id /* block */)a6;

@end
