@class HFTVInputControlItem;

@interface HUQuickControlTVInputSourceViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFTVInputControlItem *controlItem;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)_filterInputValues:(id)a0;
- (id)_toPickerViewItems:(id)a0;
- (BOOL)_shouldWriteInputValue:(id)a0;

@end
