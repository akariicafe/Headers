@class NSUUID, NSString, NSNumber;

@interface HKMedicationScheduleItemDose : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *scheduleUUID;
@property (readonly, copy, nonatomic) NSString *medicationIdentifier;
@property (readonly, copy, nonatomic) NSNumber *dose;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithScheduleUUID:(id)a0 dose:(id)a1 medicationIdentifier:(id)a2;

@end
