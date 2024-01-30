@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

@interface SBSStatusBarStyleOverridesCoordinator : NSObject

@property (weak, nonatomic) id<SBSStatusBarStyleOverridesCoordinatorDelegate> delegate;
@property (readonly, nonatomic) int styleOverrides;

- (void).cxx_destruct;
- (void)setRegisteredStyleOverrides:(int)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)_handleStatusBarTapWithContext:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_registrationInvalidated:(id)a0;

@end
