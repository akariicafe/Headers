@class NSString, NSDate;

@interface _HKTimePeriod : NSObject <NSSecureCoding, NSCopying, _HKDateBounded>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timePeriodWithStartDate:(id)a0 endDate:(id)a1;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareByEndDate:(id)a0;
- (BOOL)endsBeforeDate:(id)a0;
- (BOOL)startsAfterDate:(id)a0;
- (BOOL)containsTimePeriod:(id)a0;
- (BOOL)overlapsTimePeriod:(id)a0;
- (long long)compareByStartDate:(id)a0;

@end
