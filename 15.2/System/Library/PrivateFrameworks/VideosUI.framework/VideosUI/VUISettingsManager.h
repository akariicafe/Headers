@class NSString, NSNumber;

@interface VUISettingsManager : NSObject

@property (readonly, nonatomic) NSString *restrictions;
@property (copy, nonatomic) NSString *preferredVideoFormat;
@property (copy, nonatomic) NSNumber *maxMovieRank;
@property (copy, nonatomic) NSNumber *maxTVShowRank;
@property (readonly, nonatomic, getter=isAppInstallationAllowed) BOOL appInstallationAllowed;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (unsigned long long)_preferredVideoFormat;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (id)_formatStringForVideoFormat:(unsigned long long)a0;
- (BOOL)_hasRestrictionsChanged;
- (BOOL)_hasPreferredVideoFormatChanged;
- (void)_sendSettingsValuesToJS;
- (id)preferencesJSONData;
- (void)checkAndUpdateSettings;

@end
