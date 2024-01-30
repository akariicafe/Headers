@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface VTXPCServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
}

- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (unsigned char)getLastTriggerType;
- (void)notifySecondChanceRequest;
- (void)clearVoiceTriggerCount;
- (long long)isLastTriggerFollowedBySpeech;
- (void)resetAssertions;
- (void)notifyTriggerEventRequest;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (id)getFirstChanceAudioBuffer;
- (void).cxx_destruct;
- (void)requestAudioCapture:(double)a0;
- (id)init;
- (id)requestCurrentVoiceTriggerAssetDictionary;
- (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
- (id)getFirstChanceVTEventInfo;
- (void)setCurrentBuiltInRTModelDictionary:(id)a0;
- (id)requestCurrentBuiltInRTModelDictionary;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1;
- (void)dealloc;
- (long long)getVoiceTriggerCount;
- (id)_service;
- (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
- (id)getFirstChanceTriggeredDate;

@end
