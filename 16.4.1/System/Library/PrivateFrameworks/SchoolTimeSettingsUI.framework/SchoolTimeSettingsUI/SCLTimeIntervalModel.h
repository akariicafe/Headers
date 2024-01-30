@class NSArray, NSCalendar, NSDateInterval, SCLTimeInterval, NSString, NSMutableArray;

@interface SCLTimeIntervalModel : NSObject <SCLTimeIntervalDateConverting> {
    NSMutableArray *_timeIntervals;
}

@property (class, readonly, nonatomic) SCLTimeInterval *defaultTimeInterval;

@property (nonatomic) BOOL canAppendTimeInterval;
@property (readonly, copy, nonatomic) NSArray *constraintIntervals;
@property (copy, nonatomic) NSArray *timeIntervals;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDateInterval *canonicalDateInterval;
@property (readonly, nonatomic) BOOL canRemoveTimeIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)appendTimeInterval:(id)a0;
- (void)_recalculateCanAppend;
- (id)canonicalDateIntervalForTimeInterval:(id)a0;
- (id)initWithTimeIntervals:(id)a0;
- (id)nextProposedTimeInterval;
- (void)removeTimeIntervalAtIndex:(unsigned long long)a0;
- (void)replaceTimeIntervalAtIndex:(unsigned long long)a0 withTimeInterval:(id)a1;
- (id)scheduleTimeWithDate:(id)a0;

@end
