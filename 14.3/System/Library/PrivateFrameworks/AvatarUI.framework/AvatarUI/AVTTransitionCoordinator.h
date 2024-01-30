@class NSMutableArray;
@protocol AVTTransitionScheduler;

@interface AVTTransitionCoordinator : NSObject

@property (retain, nonatomic) id<AVTTransitionScheduler> scheduler;
@property (readonly, nonatomic) NSMutableArray *pendingTransitions;
@property (readonly, nonatomic) NSMutableArray *runningTransitions;
@property (readonly, nonatomic) double delay;

+ (id /* block */)eventHandlerForCoordinator:(id)a0;
+ (id)concurrentTransitionCoordinatorWithDelay:(double)a0;
+ (id)synchronousTransitionCoordinator;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startNextTransition;
- (void)didCompleteRunningTransition:(id)a0;
- (id)allTransitions;
- (id)transitionsMatchingModel:(id)a0;
- (void)addTransition:(id)a0;
- (void)cancelAllTransitions;
- (void)cancelTransitionsMatchingModel:(id)a0;

@end
