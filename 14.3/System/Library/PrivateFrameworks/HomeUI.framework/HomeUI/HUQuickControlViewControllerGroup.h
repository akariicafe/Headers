@class HUQuickControlViewController, NSSet;

@interface HUQuickControlViewControllerGroup : NSObject

@property (readonly, nonatomic) HUQuickControlViewController *primaryViewController;
@property (readonly, nonatomic) NSSet *alternateViewControllers;

- (void).cxx_destruct;
- (id)initWithPrimaryViewController:(id)a0 alternateViewControllers:(id)a1;

@end
