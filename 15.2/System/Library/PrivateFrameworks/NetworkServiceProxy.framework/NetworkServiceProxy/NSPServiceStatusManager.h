@class NSMutableArray, PrivacyProxyServiceStatus, NSObject, NSPUserNotification;
@protocol NSPServiceStatusManagerDelegate;

@interface NSPServiceStatusManager : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) NSObject<NSPServiceStatusManagerDelegate> *delegate;
@property (readonly) long long diskVersion;
@property (nonatomic) unsigned long long generation;
@property (retain) PrivacyProxyServiceStatus *serviceStatus;
@property (retain) NSPUserNotification *userNotification;
@property (retain) NSMutableArray *serviceStatusTimeline;
@property (retain) NSMutableArray *networkStatusTimeline;
@property unsigned long long userTier;
@property unsigned long long effectiveTier;

+ (void)removeFromPreferences;

- (void)setServiceStatusOnTimeline:(unsigned long long)a0;
- (id)diagnostics;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)reportActiveOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)encodeWithCoder:(id)a0;
- (void)reportBlockedOnWiFiName:(id)a0;
- (void)reportServiceDisabled;
- (void)reportFraudAlert;
- (void)reportDisabledOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)reportActiveOnWiFiName:(id)a0;
- (void)reportDisabledOnCellularName:(id)a0;
- (BOOL)isEffectiveTierSubscriber;
- (id)description;
- (void)postNotification;
- (void)reportUnsupportedRegion:(id)a0;
- (void)reportSystemIncompatibility;
- (void)openiCloudSettings;
- (void)reportBlockedOnCellularName:(id)a0;
- (BOOL)isServiceActive;
- (void).cxx_destruct;
- (void)handleEffectiveUserTierChange:(unsigned long long)a0;
- (void)reportDisabledOnWiFiName:(id)a0;
- (BOOL)saveToPreferences;
- (void)reportServiceOutageWithOutageReasonStats:(id)a0;
- (void)clearNetworkStatusForType:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)publishDailyServiceStatus;
- (void)reportBlockedOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)setNetworkStatusOnTimeline:(id)a0;
- (void)publishDailyNetworkStatus;
- (BOOL)updateNetworkStatus:(unsigned long long)a0 type:(int)a1 name:(id)a2;
- (void)reportServiceActive;
- (void)reportActiveOnCellularName:(id)a0;
- (id)initWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (void)reportServiceStatus:(unsigned long long)a0 title:(id)a1 message:(id)a2 serviceStatusDetails:(id)a3;
- (id)queue;
- (id)initFromPreferencesWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (void)reportSubscriberUnsupportedRegion:(id)a0;

@end
