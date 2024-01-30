@class NSString, NSArray, NSDate;

@interface HKMedicationScheduleItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *scheduledDateTime;
@property (readonly, nonatomic) BOOL notificationSent;
@property (readonly, copy, nonatomic) NSArray *doses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithScheduledDateTime:(id)a0 notificationSent:(BOOL)a1 doses:(id)a2;

@end
