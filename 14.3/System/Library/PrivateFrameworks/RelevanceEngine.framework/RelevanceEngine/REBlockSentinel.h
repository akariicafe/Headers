@interface REBlockSentinel : NSObject

@property (getter=isCompleted) BOOL completed;
@property (readonly, nonatomic) id /* block */ failureBlock;

- (id)init;
- (void).cxx_destruct;
- (void)complete;
- (void)dealloc;
- (id)initWithFailureBlock:(id /* block */)a0;

@end
