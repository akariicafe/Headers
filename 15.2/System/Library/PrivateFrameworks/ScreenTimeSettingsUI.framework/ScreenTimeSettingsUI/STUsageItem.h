@class UIColor, NSString, UIImage, STUsageTrustIdentifier, NSDate, NSNumber;

@interface STUsageItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) STUsageTrustIdentifier *trustIdentifier;
@property (readonly, copy, nonatomic) NSString *budgetItemIdentifier;
@property (readonly, nonatomic) BOOL usageTrusted;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) UIColor *color;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long timePeriod;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSNumber *totalUsage;
@property (copy, nonatomic) NSNumber *maxUsage;
@property (copy, nonatomic) NSNumber *minUsage;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
