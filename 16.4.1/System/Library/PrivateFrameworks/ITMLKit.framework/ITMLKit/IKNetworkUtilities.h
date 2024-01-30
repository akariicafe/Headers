@class NSString, RadiosPreferences;

@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate> {
    id _isNetworkTypeChangedToken;
    id _networkReachabilityChangedToken;
    RadiosPreferences *_radioPrefs;
}

@property (readonly, nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (readonly, nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic) NSString *networkType;
@property (readonly, nonatomic) double lastNetworkChangedTime;

+ (id)sharedInstance;

- (void)airplaneModeChanged;
- (void)dealloc;
- (id)init;
- (void)_notifyObservers;
- (void).cxx_destruct;

@end
