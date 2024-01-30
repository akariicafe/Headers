@class NSDate;

@interface _NSConcreteDateInterval : NSDateInterval {
    NSDate *_startDate;
    double _duration;
}

- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)init;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void)dealloc;
- (id)startDate;
- (double)duration;
- (id)endDate;

@end
