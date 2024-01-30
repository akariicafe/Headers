@class SBLockOverlayViewController;

@interface SBLockOverlayContext : NSObject

@property (readonly, nonatomic) SBLockOverlayViewController *viewController;
@property (readonly, nonatomic) unsigned long long priority;
@property (copy, nonatomic) id /* block */ activationBlock;
@property (copy, nonatomic) id /* block */ deactivationBlock;

- (void).cxx_destruct;
- (id)initWithOverlayViewController:(id)a0 priority:(unsigned long long)a1;

@end
