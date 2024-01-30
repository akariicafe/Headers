@class NSMutableArray;

@interface MTFullscreenTransitionTracker : NSObject

@property (class, readonly, nonatomic) BOOL isTransitioning;

@property (nonatomic) BOOL isTransitioning;
@property (retain, nonatomic) NSMutableArray *pendingBlocks;

+ (void)performAfterTransitioning:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)willBeginTransition:(id)a0;
- (void)didFinishTransition:(id)a0;

@end
