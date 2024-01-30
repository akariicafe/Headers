@class NSString, NSDate;

@interface CKOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange>

@property (retain) NSDate *startDate;
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

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithOperationState:(unsigned long long)a0 startDate:(id)a1 duration:(double)a2;
- (long long)compareStopTime:(id)a0;
- (long long)compareStartTime:(id)a0;

@end
