@class NSUUID, NSDate;

@interface ATXDuetEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSUUID *locationIdentifier;

+ (long long)_secondsInDayFromDate:(id)a0 calendar:(id)a1;

- (long long)compare:(id)a0;
- (id)identifier;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void)setEndDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCurrentContextStoreValues;
- (unsigned long long)hash;
- (void)tagWithLocationOfInterestIdentifier:(id)a0;
- (id)locationIdentifierUUIDString;
- (long long)startDateSecondsAfterMidnight;
- (long long)endDateSecondsAfterMidnight;
- (BOOL)isStartDateOnWeekday;
- (BOOL)isEndDateOnWeekday;

@end
