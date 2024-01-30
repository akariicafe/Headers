@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)a0 didInstallNewAsset:(BOOL)a1 assetProviderType:(unsigned long long)a2;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)_runVoiceProfileRetrainerWithAsset:(id)a0 withLanguageCode:(id)a1;
- (void)triggerVoiceProfileRetrainingWithAsset:(id)a0;
- (void)_speakerRecognitionModelRetrainCallback;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)_speakerRecognitionCleanupDuplicatedProfilesCallback;

@end
