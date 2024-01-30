@class NSString, NSDate;

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rangeWithRange:(id)a0;
+ (BOOL)range:(id)a0 intersectsRange:(id)a1;
+ (BOOL)range:(id)a0 intersectsRange:(id)a1 allowSinglePointIntersection:(BOOL)a2;
+ (BOOL)range:(id)a0 intersectsRangeWithStartDate:(id)a1 endDate:(id)a2;
+ (BOOL)range:(id)a0 intersectsRangeWithStartDate:(id)a1 endDate:(id)a2 allowSinglePointIntersection:(BOOL)a3;
+ (id)rangeByExpandingRange:(id)a0 direction:(long long)a1 components:(id)a2 calendar:(id)a3;
+ (id)rangeByExpandingRange:(id)a0 direction:(long long)a1 duration:(double)a2;
+ (id)rangeByExpandingRange:(id)a0 direction:(long long)a1 multiplier:(unsigned long long)a2;
+ (id)rangeWithStartDate:(id)a0 duration:(double)a1;
+ (id)rangeWithStartDate:(id)a0 endDate:(id)a1;
+ (BOOL)rangesIntersectWithStartDate1:(id)a0 endDate1:(id)a1 startDate2:(id)a2 endDate2:(id)a3;
+ (BOOL)rangesIntersectWithStartDate1:(id)a0 endDate1:(id)a1 startDate2:(id)a2 endDate2:(id)a3 allowSinglePointIntersection:(BOOL)a4;

- (void)encodeWithCoder:(id)a0;
- (BOOL)containsDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)briefDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (BOOL)containsRange:(id)a0;
- (BOOL)intersectsRange:(id)a0;
- (void).cxx_destruct;
- (void)setDuration:(double)a0;
- (id)_calculateMidnightsInCalendar:(id)a0;
- (id)intersectionWithRange:(id)a0;
- (BOOL)intersectsRange:(id)a0 allowSinglePointIntersection:(BOOL)a1;
- (BOOL)intersectsRangeWithStartDate:(id)a0 endDate:(id)a1;
- (BOOL)intersectsRangeWithStartDate:(id)a0 endDate:(id)a1 allowSinglePointIntersection:(BOOL)a2;
- (id)midnightsForRangeInTimeZoneString:(id)a0;
- (id)midpoint;
- (void)setStartDate:(id)a0 duration:(double)a1;
- (void)setStartDate:(id)a0 endDate:(id)a1;
- (id)subtractRange:(id)a0;
- (id)unionRange:(id)a0;

@end
