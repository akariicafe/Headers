@class NSArray;

@interface PXForYouSettings : PXSettings

@property (class, readonly, nonatomic) NSArray *keyPathsAffectingGadgetVisibility;

@property (nonatomic) BOOL showMemories;
@property (nonatomic) BOOL showSharedAlbumActivity;
@property (nonatomic) BOOL showCMMSuggestions;
@property (nonatomic) BOOL showCMMInvitations;
@property (nonatomic) BOOL showRecentInterestSuggestions;
@property (nonatomic) BOOL showSurveyQuestions;
@property (nonatomic) BOOL showSurveyQuestionsWithProfile;
@property (nonatomic) BOOL showFooter;
@property (nonatomic) BOOL showVerticalSampleGadgets;
@property (nonatomic) BOOL showHorizontalGadget;
@property (nonatomic) BOOL showSharedLibraryInvitations;
@property (nonatomic) BOOL showSharedLibrarySharingSuggestions;
@property (nonatomic) BOOL showContentSyndication;
@property (nonatomic) BOOL allowVideoPlayback;
@property (nonatomic) BOOL allowLoopPlayback;
@property (nonatomic) BOOL allowGIFPlayback;
@property (nonatomic) unsigned long long maxSimultaneousVideoCount;
@property (nonatomic) double minimumVisibilityForVideoPlayback;
@property (nonatomic) BOOL useMockData;
@property (nonatomic) BOOL forceDisplayReportJunk;
@property (nonatomic) BOOL forcePortraitBias;
@property (nonatomic) BOOL useSquareSharedAlbumActivity;
@property (nonatomic) BOOL disableSharedAlbumTopMargin;
@property (nonatomic) BOOL alwaysShowSuggestionRenderingOverlay;
@property (nonatomic) BOOL delayEditRenders;
@property (nonatomic) BOOL useCachedEditRenders;
@property (nonatomic) unsigned long long maxMemoriesToFetch;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (long long)version;

@end
