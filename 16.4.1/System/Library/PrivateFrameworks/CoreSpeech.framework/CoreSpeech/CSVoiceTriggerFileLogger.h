@class CSSpeechManager, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFileLogger : NSObject <CSVoiceTriggerDelegate, CSSelfTriggerDetectorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSSpeechManager *speechManager;
@property (nonatomic) BOOL fileLoggingEnabled;
@property (nonatomic) BOOL geckoLoggingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpeechManager:(id)a0 fileLoggingEnabled:(BOOL)a1 geckoLoggingEnabled:(BOOL)a2;
- (void)_writeDictionary:(id)a0 toPath:(id)a1;
- (void)_clearOldLoggingFiles;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (id)_audioLogDirectory;
- (void)_clearOldGeckoLoggingFiles;
- (id)_geckoLogDirectory;
- (BOOL)_shouldSkipLogging:(id)a0;
- (void)selfTriggerDetector:(id)a0 didDetectSelfTrigger:(id)a1;
- (id)_metaFilenameWithRootDir:(id)a0 prefix:(id)a1 deviceId:(id)a2;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)_logVTResult:(id)a0 metaFilePath:(id)a1 audioFilePath:(id)a2 completion:(id /* block */)a3;
- (id)_timeStampString;
- (BOOL)_shouldLogDeviceId:(id)a0;
- (id)init;
- (void)_logGeckoWithFilePrefix:(id)a0 WithResult:(id)a1;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void).cxx_destruct;

@end
