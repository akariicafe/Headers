@class NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface VUINetworkUtilities : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver> {
    RadiosPreferences *_radioPrefs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkUtilityQueue;
@property (readonly, nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (readonly, nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic) NSString *networkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)airplaneModeChanged;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (id)init;
- (void)_notifyObservers;
- (void).cxx_destruct;

@end
