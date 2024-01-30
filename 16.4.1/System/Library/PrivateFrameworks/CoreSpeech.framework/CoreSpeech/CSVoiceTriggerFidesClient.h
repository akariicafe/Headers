@class CSAudioCircularBuffer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) CSAudioCircularBuffer *audioBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_medicalIDName;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (id)_lastTriggerDataWithResult:(id)a0;
- (id)_medicalIDAge;
- (void)voiceTriggerGotSuperVector:(id)a0;
- (id)init;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)_logDESRecordWithType:(long long)a0 result:(id)a1;
- (void).cxx_destruct;

@end
