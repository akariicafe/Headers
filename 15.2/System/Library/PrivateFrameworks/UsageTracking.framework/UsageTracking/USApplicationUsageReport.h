@class NSDictionary, NSString;

@interface USApplicationUsageReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *userNotificationsByBundleIdentifier;
@property (copy) NSDictionary *pickupsByBundleIdentifier;
@property (readonly, copy) NSString *canonicalBundleIdentifier;
@property (readonly) BOOL applicationUsageTrusted;
@property (readonly) double totalUsageTime;
@property (readonly, copy) NSDictionary *applicationUsageByBundleIdentifier;
@property (readonly, copy) NSDictionary *webUsageByDomain;
@property (readonly) unsigned long long totalUserNotifications;
@property (readonly) unsigned long long totalPickups;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) double applicationUsageTime;

- (id)initWithBundleIdentifier:(id)a0 totalUsageTime:(double)a1 applicationUsageTime:(double)a2 webUsageByDomain:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_usApplicationUsageReportCommonInitWithCanonicalBundleIdentifier:(id)a0 applicationUsageTrusted:(BOOL)a1 totalUsageTime:(double)a2 applicationUsageByBundleIdentifier:(id)a3 webUsageByDomain:(id)a4 userNotificationsByBundleIdentifier:(id)a5 pickupsByBundleIdentifier:(id)a6;
- (id)initWithCanonicalBundleIdentifier:(id)a0 applicationUsageTrusted:(BOOL)a1 totalUsageTime:(double)a2 applicationUsageByBundleIdentifier:(id)a3 webUsageByDomain:(id)a4 userNotificationsByBundleIdentifier:(id)a5 pickupsByBundleIdentifier:(id)a6;
- (id)initWithCanonicalBundleIdentifier:(id)a0 totalUsageTime:(double)a1 applicationUsageByBundleIdentifier:(id)a2 webUsageByDomain:(id)a3 userNotificationsByBundleIdentifier:(id)a4 pickupsByBundleIdentifier:(id)a5;

@end
