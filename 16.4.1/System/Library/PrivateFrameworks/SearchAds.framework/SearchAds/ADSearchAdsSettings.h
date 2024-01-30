@class NSString, NSArray, NSURL, ADFCapSettings, ADClientSettingsResponse;

@interface ADSearchAdsSettings : ADSingleton

@property (retain, nonatomic) ADClientSettingsResponse *clientSettings;
@property (retain, nonatomic) NSURL *defaultToroServerURL;
@property (retain, nonatomic) NSURL *defaultAdTargetingServerURL;
@property (retain, nonatomic) NSString *algoID;
@property (retain, nonatomic) NSArray *userKeyboards;
@property (nonatomic) double requestedLocationAccuracy;
@property (nonatomic) double locationGridSpacing;
@property (nonatomic) BOOL isTest;
@property (nonatomic) BOOL isBaseline;
@property (nonatomic) BOOL isCustomTemplate;
@property (nonatomic) BOOL isRequestedImage;
@property (nonatomic) BOOL isRequestedRating;
@property (retain, nonatomic) NSString *requestedText;
@property (retain, nonatomic) NSString *requestedIcon;
@property (retain, nonatomic) NSString *templateType;
@property (retain, nonatomic) ADFCapSettings *searchSettings;
@property (retain, nonatomic) ADFCapSettings *landingPageSettings;
@property (retain, nonatomic) ADFCapSettings *iris1Settings;
@property (retain, nonatomic) ADFCapSettings *iris2Settings;
@property (retain, nonatomic) ADFCapSettings *metisSettings;
@property (retain, nonatomic) ADFCapSettings *floraSettings;

+ (id)sharedInstance;

- (void)refresh;
- (void)checkDefaultsAndSetInternalSettingsOverrides;
- (void)applyClientSettings;
- (id)_fCapParametersFromType:(long long)a0;
- (void)restoreClientSettings;
- (void)expireClientSettings;
- (id)_fCapSettingsFromType:(long long)a0;
- (id)_getParametersForName:(id)a0;
- (id)init;
- (double)clientSettingsExpirationDate;
- (void).cxx_destruct;
- (void)refreshClientSettings:(id /* block */)a0;

@end
