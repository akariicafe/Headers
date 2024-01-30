@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject

@property (readonly, nonatomic) NSDateComponents *startDateComponents;
@property (readonly, nonatomic) NSDateComponents *endDateComponents;

- (id)initWithStartDateComponents:(id)a0 endDateComponents:(id)a1;
- (void).cxx_destruct;
- (BOOL)containsDateComponents:(id)a0 inCalendar:(id)a1;
- (unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)a0;

@end
