@class NSArray;

@interface _CNAggregateTask : CNTask

@property (readonly, nonatomic) NSArray *tasks;

- (BOOL)cancel;
- (id)description;
- (void).cxx_destruct;
- (id)run:(id *)a0;
- (void)cancelSubtasks;
- (id)initWithName:(id)a0 tasks:(id)a1;
- (id)runSubtask:(id)a0 error:(id *)a1;

@end
