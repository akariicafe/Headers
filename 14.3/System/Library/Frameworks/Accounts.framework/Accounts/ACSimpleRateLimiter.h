@class NSLock, NSMutableArray, NSDate;

@interface ACSimpleRateLimiter : NSObject

@property (readonly) NSDate *rateLimitingStartDate;
@property (retain) NSLock *instanceLock;
@property (retain) NSMutableArray *sortedActionDates;
@property (readonly) unsigned long long maximum;
@property (readonly) double timeInterval;

- (void).cxx_destruct;
- (void)locked_removeDatesBefore:(id)a0;
- (unsigned long long)locked_indexOfFirstAfter:(id)a0;
- (id)initWithMaximum:(unsigned long long)a0 inTimeInterval:(double)a1;
- (void)locked_addDate:(id)a0;
- (BOOL)isEmptyAfterFlushing;
- (BOOL)reservePerformActionNow;

@end
