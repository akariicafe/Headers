@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_timeStampString;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)_clearOldLoggingFiles;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (BOOL)_shouldSkipLogging:(id)a0;
- (BOOL)_shouldLogDeviceId:(id)a0;
- (void)selfTriggerDetector:(id)a0 didDetectSelfTrigger:(id)a1;
- (void).cxx_destruct;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (id)init;
- (id)_audioLogDirectory;
- (void)_writeDictionary:(id)a0 toPath:(id)a1;
- (id)_metaFilenameWithPrefix:(id)a0 deviceId:(id)a1;

@end
