@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject {
    NSLock *_lock;
    NSMutableDictionary *_reachabilityRequests;
    unsigned int _networkReachability;
    struct __SCNetworkReachability { } *_networkReach;
    struct __CFDictionary { } *_networkObservers;
    struct __SCPreferences { } *_wifiPreferences;
    struct __CFDictionary { } *_wifiObservers;
    BOOL _networkNotified;
    BOOL _networkReachable;
    BOOL _wifiNotified;
    BOOL _wifiEnabled;
}

+ (id)sharedNetworkObserver;

- (void)_wifiCallBack:(unsigned int)a0;
- (BOOL)isNetworkReachable;
- (void)_networkObserversInitialize;
- (void)removeObserver:(id)a0;
- (BOOL)isWiFiEnabled;
- (void)addObserver:(id)a0 selector:(SEL)a1 forHostname:(id)a2;
- (void)_networkReachableFirstCallBack:(id)a0;
- (void)removeObserver:(id)a0 forHostname:(id)a1;
- (void)_networkReachableCallBack:(unsigned int)a0;
- (id)init;
- (void)_wifiFirstCallBack:(id)a0;
- (void)_wifiObserversInitialize;
- (void)addWiFiObserver:(id)a0 selector:(SEL)a1;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)removeNetworkReachableObserver:(id)a0;
- (void)dealloc;
- (void)removeWiFiObserver:(id)a0;

@end
