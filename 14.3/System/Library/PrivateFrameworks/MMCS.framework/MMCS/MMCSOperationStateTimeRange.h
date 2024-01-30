@class NSString, NSDate;

@interface MMCSOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange>

@property (retain, nonatomic) NSDate *startDate;
@property (readonly) unsigned long long operationState;
@property (readonly) double duration;
@property (readonly) double queueing;
@property (readonly) double executing;
@property (readonly) double absoluteStart;
@property (readonly) double relativeStart;
@property (readonly) double absoluteStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForOperationState:(unsigned long long)a0;
+ (id)descriptionWithOperationState:(unsigned long long)a0 absoluteStart:(double)a1 duration:(double)a2;
+ (id)describedSortedRanges:(id)a0;

- (void).cxx_destruct;
- (id)initWithOperationState:(unsigned long long)a0 startDate:(id)a1 duration:(double)a2;
- (long long)compareStopTime:(id)a0;
- (long long)compareStartTime:(id)a0;

@end
