@interface NUAnimationRunner : NSObject

@property (readonly, nonatomic) id /* block */ runBlock;

- (void).cxx_destruct;
- (void)runWithFinishBlock:(id /* block */)a0;
- (id)initWithRunBlock:(id /* block */)a0;

@end
