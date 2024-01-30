@class NSDate;

@interface CLKUIAlmanacTransitInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *day;
@property (retain, nonatomic) NSDate *tomorrow;
@property (nonatomic) struct { double latitude; double longitude; } location;
@property (nonatomic) long long constantSun;
@property (retain, nonatomic) NSDate *rise;
@property (retain, nonatomic) NSDate *solarNoon;
@property (retain, nonatomic) NSDate *set;
@property (retain, nonatomic) NSDate *solarMidnight;

+ (id)transitInfoForDate:(id)a0 city:(id)a1;
+ (id)transitInfoForDate:(id)a0 location:(struct { double x0; double x1; })a1;
+ (id)transitInfoForDate:(id)a0;
+ (id)transitInfoForDate:(id)a0 city:(id)a1 sunAltitude:(double)a2;
+ (id)transitInfoForDate:(id)a0 location:(struct { double x0; double x1; })a1 sunAltitude:(double)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)initWithDate:(id)a0 location:(struct { double x0; double x1; })a1;
- (id)_dateOrNil:(double)a0;
- (id)initWithDate:(id)a0 city:(id)a1;
- (id)initWithDate:(id)a0 city:(id)a1 sunAltitude:(double)a2;
- (id)initWithDate:(id)a0 location:(struct { double x0; double x1; })a1 sunAltitude:(double)a2;
- (BOOL)isDateWithinTransitInfo:(id)a0;

@end
