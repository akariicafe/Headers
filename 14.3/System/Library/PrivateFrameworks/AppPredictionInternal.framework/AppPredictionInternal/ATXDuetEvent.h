@class NSUUID, NSDate;

@interface ATXDuetEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSUUID *locationIdentifier;

+ (long long)_secondsInDayFromDate:(id)a0 calendar:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (void)tagWithLocationOfInterestIdentifier:(id)a0;
- (id)locationIdentifierUUIDString;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)a0;
- (long long)startDateSecondsAfterMidnight;
- (long long)endDateSecondsAfterMidnight;
- (BOOL)isStartDateOnWeekday;
- (BOOL)isEndDateOnWeekday;

@end
