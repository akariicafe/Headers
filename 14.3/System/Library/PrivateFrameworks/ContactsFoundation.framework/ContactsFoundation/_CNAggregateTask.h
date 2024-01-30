@class NSArray;

@interface _CNAggregateTask : CNTask

@property (readonly, nonatomic) NSArray *tasks;

- (BOOL)cancel;
- (id)initWithName:(id)a0 tasks:(id)a1;
- (void).cxx_destruct;
- (id)runSubtask:(id)a0 error:(id *)a1;
- (void)cancelSubtasks;
- (id)description;
- (id)run:(id *)a0;

@end
