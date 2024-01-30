@class NSArray, NSDate;

@interface RETimeline : NSObject <NSCopying> {
    NSArray *_transitionDates;
    NSArray *_values;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *transitionDates;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)valueForDate:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimeline:(id)a0;
- (BOOL)isEqualToTimeline:(id)a0;
- (id)initWithStartDate:(id)a0 values:(id)a1 durations:(id)a2;

@end
