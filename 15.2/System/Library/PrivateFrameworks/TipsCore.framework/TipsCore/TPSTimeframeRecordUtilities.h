@class NSDate;

@interface TPSTimeframeRecordUtilities : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL isWeekday;
@property (readonly, nonatomic) BOOL isWeekend;
@property (readonly, nonatomic) BOOL isMonday;
@property (readonly, nonatomic) BOOL isTuesday;
@property (readonly, nonatomic) BOOL isWednesday;
@property (readonly, nonatomic) BOOL isThursday;
@property (readonly, nonatomic) BOOL isFriday;
@property (readonly, nonatomic) BOOL isSaturday;
@property (readonly, nonatomic) BOOL isSunday;
@property (readonly, nonatomic) BOOL isMorning;
@property (readonly, nonatomic) BOOL isAfternoon;
@property (readonly, nonatomic) BOOL isEvening;
@property (readonly, nonatomic) BOOL isNight;

+ (BOOL)supportsSecureCoding;
+ (id)keyOrder;

- (id)initWithDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)recordInfo;

@end
