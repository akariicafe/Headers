@class HFChildServiceControlItem, HUQuickControlCollectionViewController, HFControlItem, HFTemperatureThresholdControlItem;
@protocol HFPrimaryStateWriter;

@interface HUQuickControlFaucetPanelViewController : HUQuickControlViewController

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController;
@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem;
@property (readonly, nonatomic) HFTemperatureThresholdControlItem *temperatureControlItem;
@property (readonly, nonatomic) HFChildServiceControlItem *childValvesControlItem;

+ (id)controlItemPredicate;
+ (id)_primaryStatePredicate;
+ (id)_temperaturePredicate;
+ (id)_childValvesPredicate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2;
- (id)childQuickControlContentViewControllers;
- (id)overrideStatusText;
- (id)_controlItemMatchingPredicate:(id)a0;

@end
