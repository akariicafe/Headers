@interface NUAnimationRunner : NSObject

@property (readonly, nonatomic) id /* block */ runBlock;

- (void)runWithFinishBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRunBlock:(id /* block */)a0;

@end
