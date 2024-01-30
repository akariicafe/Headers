@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selfTriggerDetector:(id)a0 didDetectSelfTrigger:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_timeStampString;
- (void)_writeDictionary:(id)a0 toPath:(id)a1;
- (void)_clearOldLoggingFiles;
- (void)voiceTriggerDidDetectNearMiss:(id)a0;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (id)_metaFilenameWithPrefix:(id)a0;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (id)_audioLogDirectory;

@end
