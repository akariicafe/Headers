@class NSTimeZone, NSArray, NSDateInterval, NSDictionary, NSDate;

@interface USUsageReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double screenTime;
@property (readonly, copy) NSDateInterval *longestSession;
@property (readonly, copy) NSArray *categoryUsage;
@property (readonly) unsigned long long pickupsWithoutApplicationUsage;
@property (readonly, copy) NSDate *firstPickup;
@property (readonly, copy) NSDateInterval *interval;
@property (readonly, copy) NSTimeZone *timeZone;
@property (readonly, copy) NSDate *lastEventDate;
@property (readonly, copy) NSDictionary *userNotificationsByBundleIdentifier;
@property (readonly, copy) NSDictionary *pickupsByBundleIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithScreenTime:(double)a0 longestSession:(id)a1 categoryUsage:(id)a2 pickupsWithoutApplicationUsage:(unsigned long long)a3 firstPickup:(id)a4 interval:(id)a5 timeZone:(id)a6 lastEventDate:(id)a7;
- (id)_addNotifications:(id)a0 andPickups:(id)a1 toApplicationUsageInCategoryUsage:(id)a2;
- (void)_usUsageReportCommonInitWithScreenTime:(double)a0 longestSession:(id)a1 categoryUsage:(id)a2 pickupsWithoutApplicationUsage:(unsigned long long)a3 firstPickup:(id)a4 interval:(id)a5 timeZone:(id)a6 lastEventDate:(id)a7;
- (id)initWithScreenTime:(double)a0 longestSession:(id)a1 categoryUsage:(id)a2 notifications:(id)a3 pickupsByBundleIdentifier:(id)a4 pickupsWithoutApplicationUsage:(unsigned long long)a5 firstPickup:(id)a6 interval:(id)a7 timeZone:(id)a8 lastEventDate:(id)a9;

@end
