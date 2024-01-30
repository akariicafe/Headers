@class NSString, NSMutableArray;

@interface AVPlayerViewControllerAnimationCoordinator : NSObject <AVPlayerViewControllerAnimationCoordinator>

@property (readonly, nonatomic) NSMutableArray *animations;
@property (readonly, nonatomic) NSMutableArray *completions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addCoordinatedAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)didFinishAnimations:(BOOL)a0;
- (void)performCoordinatedAnimations;

@end
