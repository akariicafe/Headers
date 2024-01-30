@class NSLock, NSString, UIView, UISlider, NSMutableArray, AXLangMap, NSObject, UIActivityIndicatorView;
@protocol OS_dispatch_queue;

@interface AXSettingsPrimaryResourceDownloadController : AXSettingsResourceDownloadController {
    BOOL _showSpeakingRate;
    BOOL _receivedCompactAnswer;
    long long _storageSize;
    BOOL _isDownloading;
    BOOL _wantsDownload;
    BOOL _wantsDelete;
    BOOL _receivedIsDownloading;
    NSString *_languageBeingDownloaded;
    NSObject<OS_dispatch_queue> *_loadVoiceFootprintsQueue;
    NSLock *_voiceFootprintLock;
    BOOL _loadingVoiceFootprints;
    UISlider *_speechRateSlider;
}

@property (retain, nonatomic) AXLangMap *languageMap;
@property (retain, nonatomic) NSMutableArray *voiceFootprints;
@property (retain, nonatomic) UIActivityIndicatorView *progressIndicator;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL showSpeakingRate;
@property (nonatomic) float speakingRate;
@property (retain, nonatomic) Class speakingRateSliderCell;
@property (nonatomic) BOOL showDialectPicker;
@property (nonatomic) BOOL showDialectInTitle;
@property (nonatomic) BOOL showNeural;
@property (nonatomic) BOOL hideLanguageInDialect;
@property (copy, nonatomic) id /* block */ setSpeakingRateCallback;
@property (copy, nonatomic) id /* block */ getSpeakingRateCallback;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)specifiers;
- (id)init;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_getSelectedVariation:(id)a0;
- (id)_internalSpecifiers;
- (void)_prepareVoiceFootprints;
- (void)_setSpeakingRate:(id)a0 specifier:(id)a1;
- (id)_speakingRate:(id)a0;
- (void)_updateSpeakingRate;
- (void)addVoiceFootprintsToArray:(id)a0 forDialect:(id)a1;
- (void)createVoiceFootprints;
- (void)setShowSpeakingRate:(BOOL)a0;
- (void)setSpeakingRateCallbackBlock:(id /* block */)a0;
- (BOOL)showSpeakingRate;

@end
