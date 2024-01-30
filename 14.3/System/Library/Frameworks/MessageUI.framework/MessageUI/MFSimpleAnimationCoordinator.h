@class NSMutableArray;

@interface MFSimpleAnimationCoordinator : NSObject

@property (retain, nonatomic) NSMutableArray *animations;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic, getter=isAnimated) BOOL animated;

- (id)init;
- (void).cxx_destruct;
- (void)animateAlongsideAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initCoordinatorAnimated:(BOOL)a0;
- (void)playAnimations;
- (void)playCompletions:(BOOL)a0;

@end
