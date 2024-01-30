@class HFMultiStateControlItem;

@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFMultiStateControlItem *controlItem;

+ (Class)controlItemClass;

- (void)viewWillAppear:(BOOL)a0;
- (id)overrideStatusText;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)modelValueDidChange;
- (BOOL)_isCharacteristicTypeRotationDirection;
- (BOOL)_useOverrideStatusText;
- (BOOL)_shouldUseWheelPickerView;

@end
