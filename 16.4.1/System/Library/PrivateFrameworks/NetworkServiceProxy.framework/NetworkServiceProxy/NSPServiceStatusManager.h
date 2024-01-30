@class NSPUserNotification, PrivacyProxyServiceStatus, NSMutableArray, NSObject;
@protocol NSPServiceStatusManagerDelegate;

@interface NSPServiceStatusManager : NSObject <NSSecureCoding, NSCopying> {
    PrivacyProxyServiceStatus *_serviceStatus;
    NSMutableArray *_serviceStatusTimeline;
    NSObject<NSPServiceStatusManagerDelegate> *_delegate;
    long long _diskVersion;
    unsigned long long _generation;
    NSPUserNotification *_userNotification;
    NSMutableArray *_networkStatusTimeline;
    unsigned long long _userTier;
    unsigned long long _effectiveTier;
    unsigned long long _lastOutageType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain) PrivacyProxyServiceStatus *serviceStatus;
@property (readonly, retain) NSMutableArray *serviceStatusTimeline;

+ (void)removeFromPreferences;

- (void)reportFraudAlert;
- (id)diagnostics;
- (void)reportServiceDisabledShouldReport:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)reportActiveOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (id)initFromPreferencesWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (void)reportServiceOutageWithType:(unsigned long long)a0 outageReasonStats:(id)a1;
- (void)handleEffectiveUserTierChange:(unsigned long long)a0;
- (void)reportSystemIncompatibility;
- (id)initWithCoder:(id)a0;
- (void)reportActiveOnWiFiName:(id)a0;
- (void)reportUnsupportedRegion:(id)a0;
- (void)reportDisabledOnCellularName:(id)a0;
- (void)reportServiceActiveShouldReport:(BOOL)a0;
- (BOOL)isServiceOutage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reportBlockedOnCellularName:(id)a0;
- (void)reportActiveOnCellularName:(id)a0;
- (void)clearNetworkStatusForType:(int)a0;
- (void)reportBlockedOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)publishDailyNetworkStatus;
- (id)initWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (void)publishDailyServiceStatus;
- (void)reportSubscriberUnsupportedRegion:(id)a0;
- (void)reportBlockedOnWiFiName:(id)a0;
- (BOOL)isNetworkOutage;
- (id)description;
- (void)reportDisabledOnWiFiName:(id)a0;
- (void)reportDisabledOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (BOOL)isServiceActive;
- (void).cxx_destruct;

@end
