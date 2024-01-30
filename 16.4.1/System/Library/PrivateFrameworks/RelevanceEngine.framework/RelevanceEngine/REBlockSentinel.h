@interface REBlockSentinel : NSObject

@property (getter=isCompleted) BOOL completed;
@property (readonly, nonatomic) id /* block */ failureBlock;

- (void)complete;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFailureBlock:(id /* block */)a0;

@end
