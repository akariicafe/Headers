@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IMNetworkObserver : NSObject {
    NSString *_dataStatusIndicator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _networkReachabilityFlags;
    long long _networkType;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_operatorName;
    struct __SCNetworkReachability { } *_reachability;
    struct __CTServerConnection { } *_telephonyServer;
}

@property long long networkType;
@property (readonly) NSString *connectionTypeHeader;
@property (readonly) unsigned int networkReachabilityFlags;

+ (id)sharedInstance;
+ (BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)a0;
+ (id)_networkObserverLogConfig;

- (id)operatorName;
- (void)_applicationForegroundNotification:(id)a0;
- (unsigned int)_currentNetworkReachabilityFlags;
- (long long)_setNetworkType:(long long)a0;
- (void)_postTypeChangedNotificationFromValue:(long long)a0 toValue:(long long)a1;
- (long long)_networkTypeForReachabilityFlags:(unsigned int)a0;
- (id)_dataStatusIndicator;
- (void)dealloc;
- (void)_copyConnectionDataStatus:(id /* block */)a0;
- (void)_reloadDataStatusIndicator;
- (void)_handleTelephonyNotificationWithName:(struct __CFString { } *)a0 userInfo:(struct __CFDictionary { } *)a1;
- (void)_reloadNetworkType;
- (id)dataStatusIndicator;
- (id)init;
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)a0;
- (void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)a0 toValue:(unsigned int)a1;
- (void)reloadNetworkType;
- (long long)_networkTypeFromDataIndicator:(id)a0;
- (BOOL)networkTypeIsCellularType:(long long)a0;
- (id)stringForNetworkType:(long long)a0;

@end
