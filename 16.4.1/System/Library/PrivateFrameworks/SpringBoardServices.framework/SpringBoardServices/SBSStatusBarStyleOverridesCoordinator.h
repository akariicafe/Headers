@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

@interface SBSStatusBarStyleOverridesCoordinator : NSObject

@property (weak, nonatomic) id<SBSStatusBarStyleOverridesCoordinatorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long styleOverrides;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setRegisteredStyleOverrides:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)_handleStatusBarTapWithContext:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_registrationInvalidated:(id)a0;

@end
