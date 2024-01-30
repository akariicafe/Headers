@class NSUUID;

@interface HMDTriggerConfirmationTimer : HMFTimer

@property (readonly, nonatomic) NSUUID *executionSessionID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithExecutionSessionID:(id)a0 timeoutInterval:(double)a1;

@end
