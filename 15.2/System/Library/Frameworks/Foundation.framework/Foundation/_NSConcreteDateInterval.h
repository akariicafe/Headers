@class NSDate;

@interface _NSConcreteDateInterval : NSDateInterval {
    NSDate *_startDate;
    double _duration;
}

- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)endDate;
- (id)startDate;
- (double)duration;
- (id)init;
- (void)dealloc;

@end
