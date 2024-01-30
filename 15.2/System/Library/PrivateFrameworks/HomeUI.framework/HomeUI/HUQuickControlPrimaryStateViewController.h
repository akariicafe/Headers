@class HFControlItem;
@protocol HFPrimaryStateWriter;

@interface HUQuickControlPrimaryStateViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *controlItem;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (void)viewWillAppear:(BOOL)a0;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (BOOL)_isCharacteristicTypeRotationDirection;

@end
