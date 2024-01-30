@class CSAsset, CSLanguageCodeUpdateMonitor, CSTrialAssetManager, CSAssetManager, NSString, CSTrialAssetDownloadMonitor;

@interface CSAttSiriMitigationAssetHandler : NSObject <CSTrialAssetDownloadMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (retain, nonatomic) CSAssetManager *assetManager;
@property (retain, nonatomic) CSTrialAssetManager *trialAssetManager;
@property (retain, nonatomic) CSTrialAssetDownloadMonitor *trialDownloadMonitor;
@property (retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor;
@property (nonatomic) BOOL overrideEnabled;
@property (retain, nonatomic) NSString *overridePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)trialAssetDownloadMonitorDelegate:(id)a0 didInstallNewAsset:(BOOL)a1 assetType:(unsigned long long)a2;
- (id)initWithAssetManager:(id)a0 withTrialAssetManager:(id)a1 withTrialDownloadMonitor:(id)a2 withLanguageCodeUpdateMonitor:(id)a3 withAssetOverrideFlag:(BOOL)a4 withOverrideAssetPath:(id)a5;
- (void)getMitigationAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)start;
- (void)_receivedNewAssetUpdate:(id)a0;
- (void).cxx_destruct;

@end
