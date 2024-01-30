@class NSString, NSArray, NSDate, NSNumber;

@interface ASDAppEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *cohort;
@property (copy, nonatomic) NSString *deviceVendorID;
@property (nonatomic) long long duration;
@property (nonatomic) long long foregroundUsage;
@property (copy, nonatomic) NSArray *foregroundUsageEvents;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) long long eventSubtype;
@property (copy, nonatomic) NSNumber *eventTime;
@property (nonatomic) long long eventType;
@property (copy, nonatomic) NSNumber *evid;
@property (nonatomic) BOOL hasBeenPosted;
@property (nonatomic) BOOL isBeta;
@property (nonatomic) BOOL isClip;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *shortVersion;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *storefront;
@property (copy, nonatomic) NSString *weekStartDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
