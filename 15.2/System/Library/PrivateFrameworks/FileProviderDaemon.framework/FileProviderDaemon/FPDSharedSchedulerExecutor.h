@interface FPDSharedSchedulerExecutor : NSObject

@property (nonatomic) BOOL isDone;
@property (readonly, nonatomic) id /* block */ executor;

- (void).cxx_destruct;
- (id)initWithExecutor:(id /* block */)a0;

@end
