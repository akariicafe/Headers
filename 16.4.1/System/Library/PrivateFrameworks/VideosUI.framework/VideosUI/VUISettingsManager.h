@class NSString, WLKSettingsStore, NSNumber;

@interface VUISettingsManager : NSObject

@property (readonly, nonatomic) NSString *restrictions;
@property (copy, nonatomic) NSString *preferredVideoFormat;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;
@property (retain, nonatomic) WLKSettingsStore *settingsStore;
@property (copy, nonatomic) NSNumber *maxMovieRank;
@property (copy, nonatomic) NSNumber *maxTVShowRank;
@property (readonly, nonatomic, getter=isAppInstallationAllowed) BOOL appInstallationAllowed;

+ (id)sharedInstance;

- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_preferredVideoFormat;
- (id)_formatStringForVideoFormat:(unsigned long long)a0;
- (BOOL)_hasPreferredVideoFormatChanged;
- (BOOL)_hasRestrictionsChanged;
- (BOOL)_hasUpNextLockupsUseCoverArtChanged;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (void)_sendSettingsValuesToJS:(id /* block */)a0;
- (BOOL)_upNextLockupsUseCoverArt;
- (void)checkAndUpdateSettings;
- (id)preferencesJSONData;

@end
