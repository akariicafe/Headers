@class HUQuickControlIconView, HFDictionaryValueControlItem, HUQuickControlIconViewProfile;

@interface HUQuickControlIconViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFDictionaryValueControlItem *controlItem;
@property (readonly, nonatomic) HUQuickControlIconViewProfile *viewProfile;
@property (retain, nonatomic) HUQuickControlIconView *quickControlIconView;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (void).cxx_destruct;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
