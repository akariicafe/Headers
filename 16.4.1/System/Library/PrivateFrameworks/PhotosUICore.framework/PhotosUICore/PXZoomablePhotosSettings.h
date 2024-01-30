@class NSArray;

@interface PXZoomablePhotosSettings : PXSettings

@property (class, readonly, nonatomic) NSArray *validColumns;
@property (class, readonly, nonatomic) NSArray *columnChoices;

@property (nonatomic) BOOL enablePinch;
@property (nonatomic) BOOL enableBadges;
@property (nonatomic) BOOL enableInlineVideo;
@property (nonatomic) BOOL enableOneColumn;
@property (nonatomic) BOOL enableDecadesDensity;
@property (nonatomic) BOOL forceSaliency;
@property (nonatomic) BOOL enableAutoCrossfade;
@property (nonatomic) BOOL enableDebugLayers;
@property (nonatomic) BOOL enableDebugSprites;
@property (nonatomic) BOOL enableHeaderBlur;
@property (nonatomic) BOOL enableCrossfadeFallback;
@property (nonatomic) BOOL enableDenseLevelsInSelectMode;
@property (nonatomic) BOOL titleUseDateRange;
@property (nonatomic) BOOL tapsZoomsToLastIndividualDensity;
@property (nonatomic) BOOL hideBadgesDuringZoom;
@property (nonatomic) BOOL enableAddedDateZoomingHeader;
@property (nonatomic) double decadesDensityScale;
@property (nonatomic) double denseLevelMinimumScreensOfContent;
@property (nonatomic) double individualLevelMinimumScreensOfContent;
@property (nonatomic) double headerSpaceMinimumScreensOfContent;
@property (nonatomic) double shiftingRequiredScreensTopDistance;
@property (nonatomic) double zoomingHeaderTintOpacity;
@property (nonatomic) long long columnsChoiceIndex;
@property (retain, nonatomic) NSArray *columns;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double panoramaCompactInteritemSpacing;
@property (nonatomic) double panoramaRegularInteritemSpacing;
@property (nonatomic) double cardsInteritemSpacing;
@property (nonatomic) double cardsCornerRadius;
@property (nonatomic) double cardsAspectRatio;
@property (nonatomic) long long rubberBandEffect;
@property (nonatomic) double zoomOutRubberBanding;
@property (nonatomic) double zoomInRubberBanding;
@property (nonatomic) double zoomDecelerationRate;
@property (nonatomic) double zoomSpringStiffness;
@property (nonatomic) double zoomSpringDamping;
@property (nonatomic) double recenterSpringStiffness;
@property (nonatomic) double recenterSpringDamping;
@property (nonatomic) double pinchSmoothingDuration;
@property (nonatomic) double sliderSmoothingDuration;
@property (nonatomic) double macPinchGestureDampening;
@property (nonatomic) long long simulateMinimumPhotoCount;
@property (nonatomic) long long maxPhotoCount;
@property (nonatomic) long long onlyPhotosFromToday;
@property (nonatomic) long long maxColumnsForIndividualItems;
@property (nonatomic) long long maxColumnsForSaliency;
@property (nonatomic) long long maxColumnsForSingleDate;
@property (nonatomic) long long preheatDenserZoomLevels;
@property (nonatomic) BOOL preheatThumbnailsWhenIdle;
@property (nonatomic) double alphaMaxAcceptableScale;
@property (nonatomic) double alphaMinAcceptableCoverage;
@property (nonatomic) double minAcceptableCoverage;
@property (nonatomic) double alphaDistanceForDirectionChange;
@property (nonatomic) double alphaModeTransitionDuration;
@property (nonatomic) double alphaCrossfadeMinDuration;
@property (nonatomic) double alphaCrossfadeMaxDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
