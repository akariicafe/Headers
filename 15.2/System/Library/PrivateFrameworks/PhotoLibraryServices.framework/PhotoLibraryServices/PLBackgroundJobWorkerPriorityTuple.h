@class PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerPriorityTuple : NSObject

@property (readonly, nonatomic) PLBackgroundJobWorker *worker;
@property (readonly, nonatomic) long long priority;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithWorker:(id)a0 priority:(long long)a1;
- (unsigned long long)hash;

@end
