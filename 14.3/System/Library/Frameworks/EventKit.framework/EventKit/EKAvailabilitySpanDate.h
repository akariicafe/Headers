@class NSDate;

@interface EKAvailabilitySpanDate : NSObject

@property (retain, nonatomic) NSDate *spanDate;
@property long long dateType;
@property long long spanType;

+ (unsigned int)valueForSpanType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 dateType:(long long)a1 spanType:(long long)a2;
- (long long)compare:(id)a0;
- (id)description;

@end
