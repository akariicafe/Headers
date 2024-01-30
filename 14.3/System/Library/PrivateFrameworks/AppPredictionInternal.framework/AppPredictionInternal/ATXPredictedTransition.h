@class ATXLocationOfInterest, NSDate;

@interface ATXPredictedTransition : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) ATXLocationOfInterest *loi;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)transitionArrayForDate:(id)a0;
- (id)initWithDate:(id)a0 loi:(id)a1;

@end
