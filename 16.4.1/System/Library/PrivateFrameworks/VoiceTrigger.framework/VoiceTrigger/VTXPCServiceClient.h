@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface VTXPCServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
}

- (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (long long)getVoiceTriggerCount;
- (id)_service;
- (unsigned char)getLastTriggerType;
- (void)notifySecondChanceRequest;
- (void)clearVoiceTriggerCount;
- (id)getFirstChanceVTEventInfo;
- (void)notifyTriggerEventRequest;
- (id)getFirstChanceTriggeredDate;
- (void)dealloc;
- (id)requestCurrentVoiceTriggerAssetDictionary;
- (void)setCurrentBuiltInRTModelDictionary:(id)a0;
- (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
- (id)getFirstChanceAudioBuffer;
- (id)init;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1;
- (void)resetAssertions;
- (void)requestAudioCapture:(double)a0;
- (id)requestCurrentBuiltInRTModelDictionary;
- (void).cxx_destruct;
- (long long)isLastTriggerFollowedBySpeech;

@end
