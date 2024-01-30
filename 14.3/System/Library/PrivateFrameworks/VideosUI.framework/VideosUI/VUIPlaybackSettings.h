@class NSArray, NSString;

@interface VUIPlaybackSettings : NSObject {
    int _preferencesNotifyToken;
    BOOL _preferencesNotifyTokenIsValid;
}

@property long long networkStatus;
@property (nonatomic) long long preferredWifiPlaybackQuality;
@property (nonatomic) long long preferredCellularPlaybackQuality;
@property (nonatomic) long long preferredWifiDownloadQuality;
@property (nonatomic) long long preferredCellularDownloadQuality;
@property (retain, nonatomic) NSArray *preferredAudioDownloadLanguages;
@property (nonatomic) BOOL useDefaultSubtitleDownloadLanguages;
@property (retain, nonatomic) NSArray *preferredSubtitleDownloadLanguages;
@property (nonatomic) BOOL cellularDataPlaybackEnabled;
@property (readonly, nonatomic) long long preferredPlaybackQualityForCurrentNetworkStatus;
@property (nonatomic) BOOL cellularDataDownloadEnabled;
@property (readonly, nonatomic) long long preferredDownloadQualityForCurrentNetworkStatus;
@property (nonatomic) BOOL preferAVAdapterCompatibility;
@property (retain, nonatomic) NSString *preferredAudioLanguageCode;

+ (id)sharedSettings;

- (id)init;
- (void)_applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_networkTypeDidChange:(id)a0;
- (void)_externalScreenTypeDidChange:(id)a0;
- (void)_sceneWillConnect:(id)a0;
- (id)_descriptionForExternalScreenType:(unsigned int)a0;
- (void)_updateNetworkStatus;
- (void)_updatePropertiesFromUserPrefs;
- (void)_registerObserverForUserPrefsChange;
- (long long)_playbackQualityForString:(id)a0 forCellular:(BOOL)a1;
- (long long)_downloadQualityForString:(id)a0;

@end
