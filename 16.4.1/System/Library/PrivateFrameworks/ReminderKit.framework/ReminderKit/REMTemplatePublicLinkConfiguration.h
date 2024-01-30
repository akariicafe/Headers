@interface REMTemplatePublicLinkConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL shouldIncludeHashtags;
@property (readonly, nonatomic) BOOL shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval;
@property (readonly, nonatomic) BOOL shouldIncludeAlarmTriggersBasedOnLocationOrVehicle;
@property (readonly, nonatomic) BOOL shouldIncludeContactsHandleData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithShouldIncludeHashtags:(BOOL)a0 shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval:(BOOL)a1 shouldIncludeAlarmTriggersBasedOnLocationOrVehicle:(BOOL)a2;

@end
