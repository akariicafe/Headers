@class NSString, NSArray, NSURL, ADClientSettingsResponse;

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
@property (nonatomic) double reverseGeolocationRefreshThresholdInMeters;
@property (nonatomic) double clickExpirationThresholdInSeconds;
@property (nonatomic) double frequencyCapExpirationInSeconds;
@property (nonatomic) unsigned long long maxFrequencyCapElements;
@property (nonatomic) unsigned long long maxClickCapElements;

+ (id)sharedInstance;

- (void)expireClientSettings;
- (void)overrideRevGeoThreshold:(double)a0;
- (void)refresh;
- (id)init;
- (void).cxx_destruct;
- (double)clientSettingsExpirationDate;
- (void)refreshClientSettings:(id /* block */)a0;
- (void)checkDefaultsAndSetInternalSettingsOverrides;
- (void)applyClientSettings;
- (void)overrideFrequencyCapExpiration:(double)a0;
- (void)overrideMaxToroClickElements:(unsigned long long)a0;
- (void)overrideToroClickExpiration:(double)a0;
- (void)overrideMaxFrequencyCapElements:(unsigned long long)a0;
- (void)restoreClientSettings;

@end
