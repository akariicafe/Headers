@class HFIncrementalStateControlItem;

@interface HUQuickControlIncrementalStateViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFIncrementalStateControlItem *controlItem;

+ (Class)controlItemClass;

- (void)viewWillAppear:(BOOL)a0;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)_createControlView;

@end
