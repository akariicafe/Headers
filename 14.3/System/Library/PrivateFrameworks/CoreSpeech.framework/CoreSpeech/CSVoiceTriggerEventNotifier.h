@class NSString, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerEventNotifier : NSObject <CSVoiceTriggerDelegate> {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_notifyRaiseToSpeakTriggerEvent:(id)a0;
- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyKeywordReject:(id)a0;
- (void)voiceTriggerGotSuperVector:(id)a0;
- (id)_createVoiceTriggerEventInfoString:(id)a0;
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)voiceTriggerDidRejected:(id)a0;
- (void)_notifySpeakerReject:(id)a0;
- (void)_notifyKeywordDetect;
- (void)unregisterObserver:(id)a0;
- (void)voiceTriggerDidDetectNearMiss:(id)a0;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)_notifyNearMissEvent:(id)a0;
- (void)_notifySuperVector:(id)a0;
- (void)_notifyTriggerEvent:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)raiseToSpeakDetected:(id)a0;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;

@end
