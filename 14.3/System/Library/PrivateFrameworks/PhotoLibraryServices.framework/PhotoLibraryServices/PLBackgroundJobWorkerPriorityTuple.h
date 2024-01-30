@class PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerPriorityTuple : NSObject

@property (readonly, nonatomic) PLBackgroundJobWorker *worker;
@property (readonly, nonatomic) unsigned long long priority;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWorker:(id)a0 priority:(unsigned long long)a1;

@end
