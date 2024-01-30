@interface MRUFeatureFlagProvider : NSObject

@property (class, readonly, nonatomic) BOOL isDynamicCoversheetEnabled;
@property (class, readonly, nonatomic) BOOL isVolumeHUDSymbolsEnabled;
@property (class, readonly, nonatomic) BOOL isMediaSuggestionsUnlockedEnabled;

@end
