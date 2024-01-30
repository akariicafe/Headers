@class NSString, NSArray, NSDateComponents, NSDate;

@interface HMUserHomeAccessScheduleRule : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDateComponents *startTime;
@property (copy) NSDateComponents *endTime;
@property unsigned long long daysOfTheWeek;
@property (copy) NSDate *validFrom;
@property (copy) NSDate *validThrough;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 daysOfTheWeek:(unsigned long long)a2 validFrom:(id)a3 validThrough:(id)a4;

@end
