@class NSString, NSDate;

@interface HKMedicalDate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *underlyingDate;
@property (readonly, nonatomic) long long form;
@property (readonly, copy, nonatomic) NSString *originalTimeZoneString;
@property (readonly, copy, nonatomic) NSDate *dateForUTC;

+ (id)referenceCalendar;
+ (id)_medicalDateFromComponents:(id)a0 originalTimeZoneString:(id)a1 form:(long long)a2 error:(out id *)a3;
+ (BOOL)_validForm:(long long)a0;
+ (id)_adjustDate:(id)a0 calendar:(id)a1 form:(long long)a2;
+ (id)_descriptionForForm:(long long)a0;
+ (unsigned long long)_calendarUnitForForm:(long long)a0;
+ (id)referenceCalendarWithLocalTimezone;
+ (id)medicalDateWithYear:(long long)a0 error:(out id *)a1;
+ (id)medicalDateWithYear:(long long)a0 month:(long long)a1 error:(out id *)a2;
+ (id)medicalDateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 error:(out id *)a3;
+ (id)medicalDateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 originalTimeZoneString:(id)a6 error:(out id *)a7;
+ (id)_medicalDateWithForm:(long long)a0 underlyingDate:(id)a1 originalTimeZoneString:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithForm:(long long)a0 underlyingDate:(id)a1 originalTimeZoneString:(id)a2;
- (id)adjustedDateForCalendar:(id)a0;
- (BOOL)isCompatibleWithMedicalDateForm:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
