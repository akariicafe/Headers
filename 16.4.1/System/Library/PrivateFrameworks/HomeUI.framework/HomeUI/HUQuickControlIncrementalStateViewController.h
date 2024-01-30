@class HFIncrementalStateControlItem;

@interface HUQuickControlIncrementalStateViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFIncrementalStateControlItem *controlItem;

+ (Class)controlItemClass;

- (void)viewWillAppear:(BOOL)a0;
- (id)_createControlView;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
