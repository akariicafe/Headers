@class NSDate;

@interface DAECalendarAvailabilitySpan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 type:(long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
