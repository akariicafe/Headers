@class NSString, NSMutableDictionary, AXSpeechSettingsModelController;

@interface AXSettingsResourceDownloadController : AXUISettingsListController <AXResourceDownloadInformationDelegate> {
    double _latestProgress;
}

@property (copy, nonatomic) id /* block */ setDialectPreferencesCallback;
@property (copy, nonatomic) id /* block */ getDialectPreferencesCallback;
@property (copy, nonatomic) id /* block */ getVoiceAllowedCallback;
@property (readonly, nonatomic) NSMutableDictionary *downloadProgessByVoiceID;
@property (retain, nonatomic) AXSpeechSettingsModelController *speechModelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)updateSettings;
- (void)finishedDeletingResource:(id)a0;
- (void)deleteResource:(id)a0;
- (BOOL)allowedToDownload;
- (void)downloadProgressUpdate:(id)a0 progress:(float)a1;
- (void)finishedDownloadingResource:(id)a0;
- (void)manageEditButton;
- (void)playSampleForResource:(id)a0 completion:(id /* block */)a1;
- (void)restoreDownloadProgress;
- (void)setSelectedSpecifier:(id)a0;
- (id)specifierForVoiceId:(id)a0;
- (void)startDownloadForResource:(id)a0;
- (void)stopDownloadForResource:(id)a0;

@end
