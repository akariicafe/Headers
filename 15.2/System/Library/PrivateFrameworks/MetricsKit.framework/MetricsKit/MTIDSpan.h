@class NSDate;

@interface MTIDSpan : NSObject

@property (retain, nonatomic) NSDate *referenceDate;
@property (nonatomic) unsigned long long serialNumber;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

+ (id)localCalendar;
+ (id)spanForScheme:(id)a0 date:(id)a1 referenceDate:(id)a2;

- (void).cxx_destruct;
- (id)initWithScheme:(id)a0 date:(id)a1 referenceDate:(id)a2;

@end
