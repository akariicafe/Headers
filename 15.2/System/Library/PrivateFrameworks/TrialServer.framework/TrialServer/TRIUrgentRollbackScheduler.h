@class NSString;
@protocol TRITaskQueuing;

@interface TRIUrgentRollbackScheduler : NSObject <TRIUrgentRollbackSchedulerProtocol>

@property (readonly, nonatomic) id<TRITaskQueuing> queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTaskQueue:(id)a0;
- (void)scheduleUrgentRollbackForExperiment:(id)a0;

@end
