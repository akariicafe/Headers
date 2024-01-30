@class HFControlItem;
@protocol HFPrimaryStateWriter;

@interface HUQuickControlPrimaryStateViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *controlItem;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_isCharacteristicTypeRotationDirection;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
