@class NSMutableArray;

@interface NUAnimationQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *queue;
@property (nonatomic, getter=isRunning) BOOL running;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)addAnimation:(id /* block */)a0;
- (void)runUntilEmpty;

@end
