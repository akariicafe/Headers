@interface REBlockSentinel : NSObject

@property (getter=isCompleted) BOOL completed;
@property (readonly, nonatomic) id /* block */ failureBlock;

- (void)complete;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithFailureBlock:(id /* block */)a0;

@end
