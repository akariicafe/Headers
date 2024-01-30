@class NSUUID, NSDate;

@interface ATXDuetEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSUUID *locationIdentifier;

+ (long long)_secondsInDayFromDate:(id)a0 calendar:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCurrentContextStoreValues;
- (id)initWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (void)setEndDate:(id)a0;
- (id)identifier;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (long long)compare:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)endDateSecondsAfterMidnight;
- (BOOL)isEndDateOnWeekday;
- (BOOL)isStartDateOnWeekday;
- (id)locationIdentifierUUIDString;
- (long long)startDateSecondsAfterMidnight;
- (void)tagWithLocationOfInterestIdentifier:(id)a0;

@end
