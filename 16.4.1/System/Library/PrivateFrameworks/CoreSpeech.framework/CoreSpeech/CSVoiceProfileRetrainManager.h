@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)a0 didInstallNewAsset:(BOOL)a1 assetProviderType:(unsigned long long)a2;
- (void)_speakerRecognitionCleanupDuplicatedProfilesCallback;
- (void)_runVoiceProfileRetrainerWithAsset:(id)a0 withLanguageCode:(id)a1;
- (void)triggerVoiceProfileRetrainingWithAsset:(id)a0;
- (void)_retrainingVoiceProfile:(id)a0 voiceProfile:(id)a1 asset:(id)a2;
- (id)init;
- (void)_speakerRecognitionModelRetrainCallback;
- (void).cxx_destruct;

@end
