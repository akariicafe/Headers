@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSUserDefaults

@property (retain) id<WeatherPreferencesPersistence> persistence;
@property (readonly, nonatomic) BOOL isInternalInstall;
@property (readonly, nonatomic) unsigned long long deviceInactivityThreshold;
@property (readonly, nonatomic) BOOL isV3Enabled;
@property (readonly, nonatomic) BOOL shouldShowUpdateTimestamp;

+ (id)sharedInternalPreferences;

- (void).cxx_destruct;

@end
