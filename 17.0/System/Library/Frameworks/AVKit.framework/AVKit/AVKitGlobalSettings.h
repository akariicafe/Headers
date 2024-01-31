@interface AVKitGlobalSettings : NSObject

@property (nonatomic) BOOL secondGenerationPlayerEnabled;
@property (readonly, nonatomic) BOOL playbackSpeedControlEnabled;
@property (readonly, nonatomic) BOOL visualAnalysisEnabled;
@property (readonly, nonatomic) BOOL visualAnalysisSupported;
@property (readonly, nonatomic) BOOL isQuickLook;
@property (readonly, nonatomic) BOOL isAVKitMacPlayer;
@property (readonly, nonatomic) BOOL isPhotosApp;
@property (readonly, nonatomic) BOOL isTVApp;
@property (readonly, nonatomic) BOOL isSpotlight;
@property (readonly, nonatomic) BOOL extendedVisualAnalysisEnabled;
@property (readonly, nonatomic) BOOL subjectLiftGestureEnabled;
@property (readonly, nonatomic) BOOL searchBannerEnabled;
@property (readonly, nonatomic) BOOL contentTabsEnabled;
@property (readonly, nonatomic) BOOL fluidSliderEnabled;
@property (readonly, nonatomic) BOOL overVideoScrubbingGestureEnabled;
@property (readonly, nonatomic) BOOL attributedContentTitlesSupported;

+ (id)shared;
+ (BOOL)_overVideoScrubbingGestureEnabled;

- (id)init;

@end
