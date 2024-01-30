@class NSString, HFEventTriggerBuilder, HUCharacteristicEventServicePickerContentViewController, HUEventUIFlow, HFCharacteristicEventBuilderItem;

@interface HUCharacteristicEventServicePickerViewController : HUInstructionsTableViewController <HUCharacteristicEventServicePickerContentViewControllerDelegate, HUEventUIFlowViewController>

@property (readonly, nonatomic) HUCharacteristicEventServicePickerContentViewController *servicePickerContentViewController;
@property (retain, nonatomic) HUEventUIFlow *flow;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilder;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) unsigned long long source;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPickServicesFromSource:(unsigned long long)a0 home:(id)a1;
+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (unsigned long long)sourceForTriggerBuilder:(id)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_next:(id)a0;
- (void)characteristicEventServicePickerContentViewController:(id)a0 didChangeNumberOfSelectedItems:(unsigned long long)a1;
- (id)characteristicTriggerBuilder;
- (id)initWithEventBuilderItem:(id)a0 triggerBuilder:(id)a1 source:(unsigned long long)a2;
- (id)initWithEventBuilderItem:(id)a0 triggerBuilder:(id)a1 source:(unsigned long long)a2 flow:(id)a3 stepIdentifier:(id)a4;
- (id)initWithFlow:(id)a0 stepIdentifier:(id)a1;
- (id)initWithInstructionsItem:(id)a0 contentViewController:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
