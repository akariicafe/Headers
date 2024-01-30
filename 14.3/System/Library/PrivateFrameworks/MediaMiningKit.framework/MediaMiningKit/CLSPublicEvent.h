@class NSTimeZone, NSSet, NSString, NSDateInterval, NSArray;

@interface CLSPublicEvent : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *supportedCategories;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long muid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDateInterval *localDateInterval;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) double localStartTime;
@property (nonatomic) double localEndTime;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *performers;
@property (nonatomic) long long expectedAttendance;
@property (nonatomic) unsigned long long businessItemMuid;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } businessItemCoordinates;
@property (readonly, nonatomic) NSDateInterval *universalDateIntervalIncludingTime;
@property (readonly, nonatomic) BOOL hasExpectedAttendance;
@property (readonly, nonatomic) BOOL isEnriched;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)_calculateUniversalDateFromLocalDate:(id)a0 includingTimeZone:(id)a1 localStartTime:(double)a2;

@end
