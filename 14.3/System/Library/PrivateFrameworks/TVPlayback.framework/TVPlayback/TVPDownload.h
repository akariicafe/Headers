@class NSMapTable, TVPMediaItemLoader, AVAggregateAssetDownloadTask, NSObject, NSDictionary, TVPDownloadSession, NSString, NSPointerArray, TVPReportingSession, TVPStateMachine, NSNumber, NSArray, NSData, NSError, NSProgress;
@protocol TVPMediaItem;

@interface TVPDownload : NSObject <AVAssetDownloadDelegate>

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) TVPMediaItemLoader *mediaItemLoader;
@property (weak, nonatomic) TVPDownloadSession *downloadSession;
@property (retain, nonatomic) AVAggregateAssetDownloadTask *downloadTask;
@property (nonatomic) BOOL downloadIsComplete;
@property (retain, nonatomic) NSPointerArray *delegates;
@property (retain, nonatomic) NSProgress *downloadProgress;
@property (retain, nonatomic) NSMapTable *mediaSelectionToProgressMap;
@property (nonatomic) unsigned long long downloadInitiationBackgroundTask;
@property (nonatomic) unsigned long long downloadTerminationBackgroundTask;
@property (retain, nonatomic) TVPReportingSession *reportingSession;
@property (nonatomic) unsigned long long numAudioSelectionsToBeDownloaded;
@property (nonatomic) unsigned long long numSubtitleSelectionsToBeDownloaded;
@property (nonatomic) unsigned long long numMediaSelectionsCompleted;
@property (readonly, nonatomic) double progress;
@property (nonatomic) BOOL performKeyFetchOnly;
@property (nonatomic) BOOL allowCellularUsage;
@property (nonatomic) BOOL preferMostCompatibleRendition;
@property (nonatomic) struct CGSize { double width; double height; } minimumRequiredPresentationSize;
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrateForMostCompatibleFormat;
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrateForHEVC;
@property (nonatomic) BOOL allowHDR;
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
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)cancel;
- (void)removeDelegate:(id)a0;
- (void)URLSession:(id)a0 aggregateAssetDownloadTask:(id)a1 didCompleteForMediaSelection:(id)a2;
- (void)URLSession:(id)a0 aggregateAssetDownloadTask:(id)a1 didLoadTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 totalTimeRangesLoaded:(id)a3 timeRangeExpectedToLoad:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 forMediaSelection:(id)a5;
- (void)addDelegate:(id)a0;
- (void)URLSession:(id)a0 aggregateAssetDownloadTask:(id)a1 willDownloadToURL:(id)a2;
- (void).cxx_destruct;
- (void)pause;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)descriptionForState:(long long)a0;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)failWithError:(id)a0;
- (void)_registerStateMachineHandlers;
- (void)_mediaItemLoaderStateDidChangeTo:(id)a0;
- (id)_newProgressForMediaSelection:(id)a0;
- (void)_addMediaSelectionOptionsIfNotAlreadyAdded:(id)a0 toMediaSelections:(id)a1 forMediaSelectionGroup:(id)a2 baseMediaSelection:(id)a3;
- (id)initWithMediaItem:(id)a0 downloadSession:(id)a1 existingDownloadTask:(id)a2;

@end
