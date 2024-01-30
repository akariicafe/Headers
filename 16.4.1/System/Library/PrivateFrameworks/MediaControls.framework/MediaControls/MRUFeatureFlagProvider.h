@interface MRUFeatureFlagProvider : NSObject

@property (class, readonly, nonatomic) BOOL isDynamicCoversheetEnabled;
@property (class, readonly, nonatomic) BOOL isRelativeVolumeUIEnabled;
@property (class, readonly, nonatomic) BOOL isAutobahnEnabled;
@property (class, readonly, nonatomic) BOOL isFavoritesEnabled;
@property (class, readonly, nonatomic) BOOL isQuickControlsLiveWaveformEnabled;
@property (class, readonly, nonatomic) BOOL isPlatterLiveWaveformEnabled;
@property (class, readonly, nonatomic) BOOL isMediaSuggestionsPushEnabled;
@property (class, readonly, nonatomic) BOOL isImageCachingEnabled;

@end
