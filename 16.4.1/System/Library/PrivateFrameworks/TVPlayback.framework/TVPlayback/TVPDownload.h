@class TVPMediaItemLoader, NSDictionary, NSObject, TVPDownloadSession, NSString, NSPointerArray, TVPReportingSession, TVPStateMachine, NSArray, NSData, AVAssetDownloadTask, NSError, NSNumber;
@protocol TVPMediaItem;

@interface TVPDownload : NSObject <AVAssetDownloadDelegatePrivate>

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) TVPMediaItemLoader *mediaItemLoader;
@property (weak, nonatomic) TVPDownloadSession *downloadSession;
@property (retain, nonatomic) AVAssetDownloadTask *downloadTask;
@property (retain, nonatomic) NSPointerArray *delegates;
@property (nonatomic) double lastDownloadProgressFractionCompleted;
@property (nonatomic) unsigned long long downloadInitiationBackgroundTask;
@property (nonatomic) unsigned long long downloadTerminationBackgroundTask;
@property (retain, nonatomic) TVPReportingSession *reportingSession;
@property (nonatomic) BOOL addedMediaItemLoaderStateObserver;
@property (nonatomic) BOOL addedProgressObserver;
@property (retain, nonatomic) NSError *startError;
@property (readonly, nonatomic) double progress;
@property (nonatomic) BOOL performKeyFetchOnly;
@property (nonatomic) BOOL allowCellularUsage;
@property (nonatomic) BOOL preferMostCompatibleRendition;
@property (retain, nonatomic) NSNumber *maximumPresentationWidth;
@property (retain, nonatomic) NSNumber *maximumAverageBitrateForHDR;
@property (retain, nonatomic) NSNumber *maximumAverageBitrateForSDRHEVC;
@property (retain, nonatomic) NSNumber *maximumAverageBitrateForAVC;
@property (nonatomic) BOOL preferEnhancedDownload;
@property (retain, nonatomic) NSNumber *maximumIWidth;
@property (retain, nonatomic) NSNumber *maximumSWidth;
@property (retain, nonatomic) NSNumber *maximumMWidth;
@property (retain, nonatomic) NSNumber *maximumIBitrate;
@property (retain, nonatomic) NSNumber *maximumSBitrate;
@property (retain, nonatomic) NSNumber *maximumMBitrate;
@property (nonatomic) BOOL allowMultichannelAudio;
@property (nonatomic) BOOL limitMultichannelAudioToSingleLanguage;
@property (nonatomic) BOOL includeDefaultAudioOption;
@property (nonatomic) BOOL includeOriginalAudio;
@property (nonatomic) BOOL includeDeviceLanguageAudio;
@property (retain, nonatomic) NSArray *preferredAudioLanguageCodes;
@property (nonatomic) BOOL includesAllSubtitles;
@property (retain, nonatomic) NSArray *preferredSubtitleLanguageCodes;
@property (retain, nonatomic) NSData *storageSettingsImageData;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) struct CGSize { double width; double height; } minimumRequiredPresentationSize;
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrateForMostCompatibleFormat;
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrateForHEVC;
@property (nonatomic) BOOL allowHDR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 willDownloadToURL:(id)a2;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 didLoadTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 totalTimeRangesLoaded:(id)a3 timeRangeExpectedToLoad:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
- (void)pause;
- (id)descriptionForState:(long long)a0;
- (void)cancel;
- (void)dealloc;
- (void)addDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)failWithError:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)start;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 willDownloadVariants:(id)a2;
- (void)_registerStateMachineHandlers;
- (void)_addMediaSelectionOptionsIfNotAlreadyAdded:(id)a0 toMediaSelections:(id)a1 forMediaSelectionGroup:(id)a2 baseMediaSelection:(id)a3;
- (void)_downloadProgressDidChange;
- (void)_mediaItemLoaderStateDidChangeTo:(id)a0;
- (id)_variantQualifiersForCurrentSettingsAndAudioOption:(id)a0 useMultichannelAudio:(BOOL)a1;
- (id)initWithMediaItem:(id)a0 downloadSession:(id)a1 existingDownloadTask:(id)a2;

@end
