@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface VTXPCServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
}

- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setCurrentBuiltInRTModelDictionary:(id)a0;
- (void)clearVoiceTriggerCount;
- (void)dealloc;
- (id)requestCurrentVoiceTriggerAssetDictionary;
- (id)_service;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1;
- (void)resetAssertions;
- (void)requestAudioCapture:(double)a0;
- (id)getFirstChanceVTEventInfo;
- (void)notifySecondChanceRequest;
- (unsigned char)getLastTriggerType;
- (long long)getVoiceTriggerCount;
- (id)getFirstChanceAudioBuffer;
- (id)requestCurrentBuiltInRTModelDictionary;
- (long long)isLastTriggerFollowedBySpeech;
- (id)getFirstChanceTriggeredDate;
- (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
- (void)notifyTriggerEventRequest;
- (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;

@end
