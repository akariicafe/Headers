@class NSNumber, NSDateComponents;

@interface HKMedicationScheduleIntervalData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateComponents *startTimeComponent;
@property (readonly, nonatomic) unsigned long long daysOfWeek;
@property (readonly, copy, nonatomic) NSNumber *cycleIndex;
@property (readonly, copy, nonatomic) NSNumber *cycleIntervalDays;
@property (readonly, copy, nonatomic) NSNumber *dose;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStartTimeComponent:(id)a0 daysOfWeek:(unsigned long long)a1 cycleIndex:(id)a2 cycleIntervalDays:(id)a3 dose:(id)a4;

@end
