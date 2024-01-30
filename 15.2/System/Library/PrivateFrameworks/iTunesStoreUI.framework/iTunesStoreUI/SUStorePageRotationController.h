@class SURotationController, SUViewController;

@interface SUStorePageRotationController : SURotationController {
    SURotationController *_childRotationController;
    SUViewController *_childViewController;
}

- (void)finishRotationFromInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)animateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)prepareToRotateToInterfaceOrientation:(long long)a0;
- (id)_childRotationController;

@end
