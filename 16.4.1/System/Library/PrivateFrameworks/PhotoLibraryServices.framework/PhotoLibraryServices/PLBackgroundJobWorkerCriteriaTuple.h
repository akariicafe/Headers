@class PLBackgroundJobCriteria, PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerCriteriaTuple : NSObject

@property (readonly, nonatomic) PLBackgroundJobWorker *worker;
@property (readonly, nonatomic) PLBackgroundJobCriteria *criteria;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWorker:(id)a0 withCriteria:(id)a1;

@end
