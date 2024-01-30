@class NSString, NSURL, NSDate, NSNumber;

@interface ASDAppUsageStats : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *clipBundleID;
@property (copy, nonatomic) NSURL *clipFullURL;
@property (copy, nonatomic) NSString *clipLaunchReason;
@property (copy, nonatomic) NSString *clipReferrerURL;
@property (copy, nonatomic) NSString *clipReferrerBundleID;
@property (copy, nonatomic) NSString *clipWebAppBundleID;
@property (copy, nonatomic) NSString *containingBundleID;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long eventTime;
@property (copy, nonatomic) NSNumber *evid;
@property (nonatomic) BOOL isClip;
@property (nonatomic) BOOL isClipLaunch;
@property (nonatomic) BOOL isExtensionUsage;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSDate *lastEventEndDate;
@property (copy, nonatomic) NSString *launchReason;
@property (copy, nonatomic) NSString *sourceStream;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) long long usageTime;
@property (nonatomic) long long usageCount;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_formatTimeInternal:(long long)a0;
- (id)_formatShortDate:(id)a0;

@end
