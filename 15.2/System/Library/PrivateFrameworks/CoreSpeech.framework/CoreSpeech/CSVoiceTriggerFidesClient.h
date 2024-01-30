@class CSAudioCircularBuffer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) CSAudioCircularBuffer *audioBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (id)_lastTriggerDataWithResult:(id)a0;
- (void)voiceTriggerGotSuperVector:(id)a0;
- (id)_medicalIDName;
- (void).cxx_destruct;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (id)init;
- (void)_logDESRecordWithType:(long long)a0 result:(id)a1;
- (id)_medicalIDAge;

@end
