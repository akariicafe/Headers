@interface PLInstrumentedBlockOperation : NSBlockOperation

@property (nonatomic) double creationTime;
@property (nonatomic) double executionStartTime;
@property (nonatomic) double executionEndTime;
@property (nonatomic) BOOL postambleAdded;
@property (readonly, nonatomic) double timeSpentWaitingInQueue;
@property (readonly, nonatomic) double executionTime;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (double)timeSpentWaitingInQueue;
- (double)executionTime;
- (id)description;
- (id)init;
- (void)addExecutionBlock:(id /* block */)a0;

@end
