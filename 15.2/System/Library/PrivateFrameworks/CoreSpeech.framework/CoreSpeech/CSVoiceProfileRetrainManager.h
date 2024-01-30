@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)a0 didInstallNewAsset:(BOOL)a1 assetProviderType:(unsigned long long)a2;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)_speakerRecognitionCleanupDuplicatedProfilesCallback;
- (void).cxx_destruct;
- (id)init;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)triggerVoiceProfileRetrainingWithAsset:(id)a0;
- (void)_runVoiceProfileRetrainerWithAsset:(id)a0 withLanguageCode:(id)a1;
- (void)_speakerRecognitionModelRetrainCallback;

@end
