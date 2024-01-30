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

- (void)_wifiObserversInitialize;
- (void)_wifiCallBack:(unsigned int)a0;
- (void)removeNetworkReachableObserver:(id)a0;
- (BOOL)isWiFiEnabled;
- (void)_wifiFirstCallBack:(id)a0;
- (void)removeWiFiObserver:(id)a0;
- (void)removeObserver:(id)a0 forHostname:(id)a1;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)addWiFiObserver:(id)a0 selector:(SEL)a1;
- (void)_networkReachableFirstCallBack:(id)a0;
- (void)_networkObserversInitialize;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 forHostname:(id)a2;
- (BOOL)isNetworkReachable;
- (id)init;
- (void)_networkReachableCallBack:(unsigned int)a0;

@end
